/*
 * Si5338A/B/C programmable clock generator platform_data.
 */

#ifndef __LINUX_PLATFORM_DATA_SI5338_H__
#define __LINUX_PLATFORM_DATA_SI5338_H__

struct clk;

/*
 * struct si5338_clkout_config - Si5338 clock output configuration
 * @name: clkout name. If omitted, clkout0/1/2/3 with name_prefix will be used
 * @clkout_src: clkout source clock
 * @drive: output drive strength
 * @rate: initial clkout rate, or default if 0
 * @enabled: output enabled by default
 */
struct si5338_clkout_config {
	const char *name;
	u8 clkout_src;
	const char *drive;
	u8 disable_state;
	unsigned long rate;
	bool enabled;
};

/*
 * struct si5338_platform_data - Platform data for the Si5338 clock driver
 * @name_prefix: prefix to clock names
 *		 In case multiple clock chips exist, each can have unique names
 * @ref_src: reference clock source
 * @fb_src: feedback clock source
 * @pll_src: array of pll source clock setting
 * @pll_master: index of MS (1 of 4) which can change pll clock
 * @pll_vco: set pll vco clock. If this is set, pll_master is ignored
 * @clkout: array of clkout configuration
 */
struct si5338_platform_data {
	const char *name_prefix;
	u8 ref_src;
	u8 fb_src;
	u8 pll_src;
	u8 pll_master;
	u32 pll_vco;
	struct si5338_clkout_config clkout[4];
};

#endif
