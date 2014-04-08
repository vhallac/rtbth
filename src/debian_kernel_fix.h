#ifndef INC_DEBIAN_KERNEL_FIX_H
#define INC_DEBIAN_KERNEL_FIX_H

/* Kludge to get it to compile in 3.2.51 of debian.
   - The version is probably incorrect, but it is good enough for my purposes.
*/
#if LINUX_VERSION_CODE <= KERNEL_VERSION(3,2,51)
#include <net/bluetooth/hci_core.h>

static inline void *hci_get_drvdata(struct hci_dev *hdev)
{
    return dev_get_drvdata(&hdev->dev);
}

static inline void hci_set_drvdata(struct hci_dev *hdev, void *data)
{
    dev_set_drvdata(&hdev->dev, data);
}
#endif


#endif /* INC_DEBIAN_KERNEL_FIX_H */
