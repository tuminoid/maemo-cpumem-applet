/*
 * Cpumem-applet - status area plugin header
 * 
 * Copyright (c) 2005-2009 Jakub Pavelek
 * Copyright (c) 2009-2010 Tuomo Tanskanen
 */

#ifndef __CPUMEM_APPLET_STATUS_AREA_ITEM_H__
#define __CPUMEM_APPLET_STATUS_AREA_ITEM_H__

#include <libhildondesktop/libhildondesktop.h>

G_BEGIN_DECLS

#define CPUMEM_APPLET_TYPE_STATUS_AREA_ITEM            (cpumem_applet_status_area_item_get_type ())
#define CPUMEM_APPLET_STATUS_AREA_ITEM(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), CPUMEM_APPLET_TYPE_STATUS_AREA_ITEM, CpumemAppletStatusAreaItem))
#define CPUMEM_APPLET_STATUS_AREA_ITEM_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass),  CPUMEM_APPLET_TYPE_STATUS_AREA_ITEM, CpumemAppletStatusAreaItemClass))
#define CPUMEM_APPLET_IS_STATUS_AREA_ITEM(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), CPUMEM_APPLET_TYPE_STATUS_AREA_ITEM))
#define CPUMEM_APPLET_IS_STATUS_AREA_ITEM_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass),  CPUMEM_APPLET_TYPE_STATUS_AREA_ITEM))
#define CPUMEM_APPLET_STATUS_AREA_ITEM_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj),  CPUMEM_APPLET_TYPE_STATUS_AREA_ITEM, CpumemAppletStatusAreaItemClass))

typedef struct _CpumemAppletStatusAreaItem        CpumemAppletStatusAreaItem;
typedef struct _CpumemAppletStatusAreaItemClass   CpumemAppletStatusAreaItemClass;
typedef struct _CpumemAppletStatusAreaItemPrivate CpumemAppletStatusAreaItemPrivate;

struct _CpumemAppletStatusAreaItem {
	HDStatusPluginItem parent;

	CpumemAppletStatusAreaItemPrivate *priv;
};

struct _CpumemAppletStatusAreaItemClass {
	HDStatusPluginItemClass parent;
};

GType cpumem_applet_status_area_item_get_type (void);

G_END_DECLS

#endif
