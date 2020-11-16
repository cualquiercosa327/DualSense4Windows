#pragma once


namespace BrokenBytes {
	namespace ControllerKit {
		struct DS_REPORT;
		struct DS_INPUT;
	}

}

namespace BrokenBytes::ControllerKit::Utils {

	/// <summary>
	/// Maps a DualSense report to a DS4 Report
	/// </summary>
	/// <param name="report">The report to be mapped to</param>
	/// <param name="raw">The mapping report</param>
	void MapDS4Report(DS4_REPORT& report, DS_REPORT raw);
	
	/// <summary>
	/// Maps a DualSense report to a XUSB Report
	/// </summary>
	/// <param name="report">The report to be mapped to</param>
	/// <param name="raw">The mapping report</param>
	void MapXUSBReport(XUSB_REPORT& report, DS_REPORT raw);

	void GetDSInputFromReport(DS_REPORT report, DS_INPUT& input);
}
