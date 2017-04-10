#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x4da7f6d2, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xbfe3935d, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9a1dfd65, __VMLINUX_SYMBOL_STR(strpbrk) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x2b688622, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0xe67d142a, __VMLINUX_SYMBOL_STR(wiphy_free) },
	{ 0x6e464343, __VMLINUX_SYMBOL_STR(cfg80211_unlink_bss) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xd4862b2f, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb8eec98b, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0x8762b84, __VMLINUX_SYMBOL_STR(find_vpid) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x66f551d, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x17f5667f, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x78802e3d, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xbf2d2913, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x4fe38dbd, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x33de4923, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x9e3fdb62, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xee3fa069, __VMLINUX_SYMBOL_STR(cfg80211_rx_mgmt) },
	{ 0x13ddd68e, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x60009e5e, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x8fdf772a, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x28cc25db, __VMLINUX_SYMBOL_STR(arm_copy_from_user) },
	{ 0x62b72b0d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf2aa4612, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x15962f8a, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xf4fa543b, __VMLINUX_SYMBOL_STR(arm_copy_to_user) },
	{ 0x6177f18b, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x1843eff6, __VMLINUX_SYMBOL_STR(cfg80211_mgmt_tx_status) },
	{ 0x789f6d47, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x78ab953a, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x8251a269, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x63b87fc5, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xcd0cd5df, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc72bd04f, __VMLINUX_SYMBOL_STR(cfg80211_vendor_cmd_reply) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x986e32a0, __VMLINUX_SYMBOL_STR(__ieee80211_get_channel) },
	{ 0x2e9e4c26, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xc2da7ffe, __VMLINUX_SYMBOL_STR(netif_tx_stop_all_queues) },
	{ 0xb8ed17dd, __VMLINUX_SYMBOL_STR(cfg80211_get_bss) },
	{ 0xdf44454, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x48a0f939, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xdc798d37, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x5152e605, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xfffaae7c, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x3de0719, __VMLINUX_SYMBOL_STR(wiphy_unregister) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x18357999, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x8f2b864, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x39ab2c45, __VMLINUX_SYMBOL_STR(cfg80211_del_sta_sinfo) },
	{ 0xfd22707, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb1b0fd40, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x67df7865, __VMLINUX_SYMBOL_STR(cfg80211_michael_mic_failure) },
	{ 0x32bf5d6b, __VMLINUX_SYMBOL_STR(wiphy_apply_custom_regulatory) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xfa5bcf35, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xf3c49661, __VMLINUX_SYMBOL_STR(kill_pid) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x9e574ed0, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x816eef4a, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xa7178e7b, __VMLINUX_SYMBOL_STR(cfg80211_ibss_joined) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xd31e2e24, __VMLINUX_SYMBOL_STR(__cfg80211_send_event_skb) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xbe75b6b7, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x731b000f, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x57848cfd, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xdeca2bab, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x633b4ad2, __VMLINUX_SYMBOL_STR(cfg80211_roamed) },
	{ 0xfe65f76c, __VMLINUX_SYMBOL_STR(cfg80211_put_bss) },
	{ 0xdfc7452a, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xe9509950, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_event_skb) },
	{ 0x5d717e5f, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_reply_skb) },
	{ 0x3c173cbb, __VMLINUX_SYMBOL_STR(wiphy_register) },
	{ 0xc7b0f52b, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xe2262ba0, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0xe0611774, __VMLINUX_SYMBOL_STR(cfg80211_ready_on_channel) },
	{ 0xb96a82e7, __VMLINUX_SYMBOL_STR(nla_put_nohdr) },
	{ 0x42f93969, __VMLINUX_SYMBOL_STR(cfg80211_connect_bss) },
	{ 0x53833b7, __VMLINUX_SYMBOL_STR(wiphy_new_nm) },
	{ 0x20a8cc52, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x61de1304, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x6878699, __VMLINUX_SYMBOL_STR(cfg80211_disconnected) },
	{ 0x490e96d8, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x9eb29292, __VMLINUX_SYMBOL_STR(cfg80211_new_sta) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0xc675aaa4, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0xb0ffa68e, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x364b3fff, __VMLINUX_SYMBOL_STR(up) },
	{ 0x87d92964, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xfd93b331, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xd35a15e, __VMLINUX_SYMBOL_STR(cfg80211_remain_on_channel_expired) },
	{ 0xe6ef941d, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x362037b8, __VMLINUX_SYMBOL_STR(netif_wake_subqueue) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x60f71cfa, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x8e282146, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x8635fd16, __VMLINUX_SYMBOL_STR(cfg80211_scan_done) },
	{ 0xdea13acd, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x80d817ab, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0xb5c888fb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xfa5b0131, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xb0c4f90f, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0xfd86d5e7, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x308ec8ad, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x8a48e94, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xdbb8bd45, __VMLINUX_SYMBOL_STR(cfg80211_inform_bss_frame_data) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cfg80211";

MODULE_ALIAS("usb:v0BDAp8812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp881Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0074d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0952d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p016Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0408d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3426d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1058p0632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB30d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3315d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3316d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p805Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p025Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDApA811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0820d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v0BDAp0823d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v7392pA811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA813d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0953d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3314d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3318d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep400Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep400Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0242d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB32d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9052d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "63D4F3940B7FFB9D4687E2F");
