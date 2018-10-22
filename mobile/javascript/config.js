	var aliasConfig = {
appName : ["", "", ""],
totalPageCount : [],
largePageWidth : [],
largePageHeight : [],
normalPath : [],
largePath : [],
thumbPath : [],

ToolBarsSettings:[],
TitleBar:[],
appLogoIcon:["appLogoIcon"],
appLogoLinkURL:["appLogoLinkURL"],
bookTitle : [],
bookDescription : [],
ButtonsBar : [],
ShareButton : [],
ShareButtonVisible : ["socialShareButtonVisible"],
ThumbnailsButton : [],
ThumbnailsButtonVisible : ["enableThumbnail"],
ZoomButton : [],
ZoomButtonVisible : ["enableZoomIn"],
FlashDisplaySettings : [],
MainBgConfig : [],
bgBeginColor : ["bgBeginColor"],
bgEndColor : ["bgEndColor"],
bgMRotation : ["bgMRotation"],
backGroundImgURL : ["mainbgImgUrl","innerMainbgImgUrl"],
pageBackgroundColor : ["pageBackgroundColor"],
flipshortcutbutton : [],
BookMargins : [],
topMargin : [],
bottomMargin : [],
leftMargin : [],
rightMargin : [],
HTMLControlSettings : [],
linkconfig : [],
LinkDownColor : ["linkOverColor"],
LinkAlpha : ["linkOverColorAlpha"],
OpenWindow : ["linkOpenedWindow"],
searchColor : [],
searchAlpha : [],
SearchButtonVisible : ["searchButtonVisible"],

productName : [],
homePage : [],
enableAutoPlay : ["autoPlayAutoStart"],
autoPlayDuration : ["autoPlayDuration"],
autoPlayLoopCount : ["autoPlayLoopCount"],
BookMarkButtonVisible : [],
googleAnalyticsID : ["googleAnalyticsID"],
OriginPageIndex : [],	
HardPageEnable : ["isHardCover"],	
UIBaseURL : [],	
RightToLeft: ["isRightToLeft"],	

LeftShadowWidth : ["leftPageShadowWidth"],	
LeftShadowAlpha : ["pageShadowAlpha"],
RightShadowWidth : ["rightPageShadowWidth"],
RightShadowAlpha : ["pageShadowAlpha"],
ShortcutButtonHeight : [],	
ShortcutButtonWidth : [],
AutoPlayButtonVisible : ["enableAutoPlay"],	
DownloadButtonVisible : ["enableDownload"],	
DownloadURL : ["downloadURL"],
HomeButtonVisible :["homeButtonVisible"],
HomeURL:['btnHomeURL'],
BackgroundSoundURL:['bacgroundSoundURL'],
//TableOfContentButtonVisible:["BookMarkButtonVisible"],
PrintButtonVisible:["enablePrint"],
toolbarColor:["mainColor","barColor"],
loadingBackground:["mainColor","barColor"],
BackgroundSoundButtonVisible:["enableFlipSound"],
FlipSound:["enableFlipSound"],
MiniStyle:["userSmallMode"],
retainBookCenter:["moveFlipBookToCenter"],
totalPagesCaption:["totalPageNumberCaptionStr"],
pageNumberCaption:["pageIndexCaptionStrs"]
};
var aliasLanguage={
frmPrintbtn:["frmPrintCaption"],
frmPrintall : ["frmPrintPrintAll"],
frmPrintcurrent : ["frmPrintPrintCurrentPage"],
frmPrintRange : ["frmPrintPrintRange"],
frmPrintexample : ["frmPrintExampleCaption"],
btnLanguage:["btnSwicthLanguage"],
btnTableOfContent:["btnBookMark"]
}
;
	var bookConfig = {
	appName:'flippdf',
	totalPageCount : 0,
	largePageWidth : 1080,
	largePageHeight : 1440,
	normalPath : "files/page/",
	largePath : "files/large/",
	thumbPath : "files/thumb/",
	
	ToolBarsSettings:"",
	TitleBar:"",
	appLogoLinkURL:"",
	bookTitle:"FLIPBUILDER",
	bookDescription:"",
	ButtonsBar:"",
	ShareButton:"",
	
	ThumbnailsButton:"",
	ThumbnailsButtonVisible:"Show",
	ZoomButton:"",
	ZoomButtonVisible:"Yes",
	FlashDisplaySettings:"",
	MainBgConfig:"",
	bgBeginColor:"#cccccc",
	bgEndColor:"#eeeeee",
	bgMRotation:45,
	pageBackgroundColor:"#FFFFFF",
	flipshortcutbutton:"Show",
	BookMargins:"",
	topMargin:10,
	bottomMargin:10,
	leftMargin:10,
	rightMargin:10,
	HTMLControlSettings:"",
	linkconfig:"",
	LinkDownColor:"#808080",
	LinkAlpha:0.5,
	OpenWindow:"_Blank",

	BookMarkButtonVisible:'true',
	productName : 'Demo created by Flip PDF',
	homePage : 'http://www.flipbuilder.com/',
	isFlipPdf : "true",
	TableOfContentButtonVisible:"true",
	searchTextJS:'javascript/search_config.js',
	searchPositionJS:undefined
};
	
	
	;bookConfig.BookTemplateName="metro";bookConfig.loadingCaptionColor="#DDDDDD";bookConfig.loadingBackground="#323232";bookConfig.appLogoIcon="../files/mobile-ext/appLogoIcon.png";bookConfig.appLogoOpenWindow="Blank";bookConfig.logoHeight="40";bookConfig.logoPadding="0";bookConfig.logoTop="0";bookConfig.toolbarColor="#000000";bookConfig.iconColor="#ECF5FB";bookConfig.pageNumColor="#000000";bookConfig.iconFontColor="#FFFFFF";bookConfig.toolbarAlwaysShow="No";bookConfig.formFontColor="#FFFFFF";bookConfig.formBackgroundColor="#27181A";bookConfig.InstructionsButtonVisible="Show";bookConfig.showInstructionOnStart="No";bookConfig.showGotoButtonsAtFirst="No";bookConfig.QRCode="Hide";bookConfig.HomeButtonVisible="Hide";bookConfig.HomeURL="%first page%";bookConfig.aboutButtonVisible="Hide";bookConfig.enablePageBack="Show";bookConfig.ShareButtonVisible="Show";shareObj = [];bookConfig.isInsertFrameLinkEnable="Show";bookConfig.addCurrentPage="No";bookConfig.EmailButtonVisible="Show";bookConfig.btnShareWithEmailBody="{link}";bookConfig.ThumbnailsButtonVisible="Show";bookConfig.thumbnailColor="#333333";bookConfig.thumbnailAlpha="70";bookConfig.BookMarkButtonVisible="Hide";bookConfig.TableOfContentButtonVisible="Show";bookConfig.SearchButtonVisible="Show";bookConfig.leastSearchChar="3";bookConfig.searchKeywordFontColor="#FFB000";bookConfig.searchHightlightColor="#ffff00";bookConfig.SelectTextButtonVisible="Show";bookConfig.PrintButtonVisible="Hide";bookConfig.BackgroundSoundButtonVisible="Show";bookConfig.FlipSound="Yes";bookConfig.BackgroundSoundLoop="-1";bookConfig.AutoPlayButtonVisible="Show";bookConfig.autoPlayAutoStart="No";bookConfig.autoPlayDuration="9";bookConfig.autoPlayLoopCount="1";bookConfig.ZoomButtonVisible="Show";bookConfig.maxZoomWidth="1400";bookConfig.defaultZoomWidth="1000";bookConfig.mouseWheelFlip="Yes";bookConfig.DownloadButtonVisible="Hide";bookConfig.PhoneButtonVisible="Hide";bookConfig.AnnotationButtonVisible="Hide";bookConfig.FullscreenButtonVisible="Show";bookConfig.bgBeginColor="#E2E2E2";bookConfig.bgEndColor="#E2E2E2";bookConfig.bgMRotation="90";bookConfig.backGroundImgURL="../files/mobile-ext/backGroundImgURL.jpg";bookConfig.backgroundPosition="stretch";bookConfig.backgroundOpacity="100";bookConfig.LeftShadowWidth="90";bookConfig.LeftShadowAlpha="0.6";bookConfig.RightShadowWidth="55";bookConfig.RightShadowAlpha="0.6";bookConfig.ShowTopLeftShadow="Yes";bookConfig.HardPageEnable="No";bookConfig.hardCoverBorderWidth="8";bookConfig.borderColor="#572F0D";bookConfig.outerCoverBorder="Yes";bookConfig.cornerRound="8";bookConfig.SingleModeBanFlipToLastPage="No";bookConfig.leftMarginOnMobile="0";bookConfig.topMarginOnMobile="0";bookConfig.rightMarginOnMobile="0";bookConfig.bottomMarginOnMobile="0";bookConfig.pageBackgroundColor="#E8E8E8";bookConfig.flipshortcutbutton="Show";bookConfig.BindingType="side";bookConfig.RightToLeft="No";bookConfig.flippingTime="0.6";bookConfig.retainBookCenter="Yes";bookConfig.FlipStyle="Flip";bookConfig.autoDoublePage="Yes";bookConfig.isTheBookOpen="No";bookConfig.thicknessWidthType="Thinner";bookConfig.thicknessColor="#ffffff";bookConfig.showThicknessOnMobile="No";bookConfig.topMargin="10";bookConfig.bottomMargin="10";bookConfig.leftMargin="10";bookConfig.rightMargin="10";bookConfig.maxWidthToSmallMode="400";bookConfig.maxHeightToSmallMode="300";bookConfig.leftRightPnlShowOption="None";bookConfig.highDefinitionConversion="no";bookConfig.LargeLogoPosition="top-left";bookConfig.LargeLogoTarget="Blank";bookConfig.isFixLogoSize="No";bookConfig.logoFixWidth="0";bookConfig.logoFixHeight="0";bookConfig.updateURLForPage="No";bookConfig.LinkDownColor="#800080";bookConfig.LinkAlpha="0.2";bookConfig.OpenWindow="Blank";bookConfig.showLinkHint="No";bookConfig.MidBgColor="#993742";bookConfig.searchFontColor="#FFFDDD";bookConfig.totalPageCount=52;bookConfig.largePageWidth=1200;bookConfig.largePageHeight=1697;;bookConfig.securityType="1";bookConfig.CreatedTime ="181021235338";bookConfig.bookTitle="电子杂志";bookConfig.bookmarkCR="1338bbf41a3c210280e666f508a1d270b12a4aa7";bookConfig.productName="Flip PDF Corporate Edition";bookConfig.homePage="http://www.flipbuilder.com";bookConfig.searchPositionJS="javascript/text_position[1].js";bookConfig.searchTextJS="javascript/search_config.js";bookConfig.normalPath="../files/mobile/";bookConfig.largePath="../files/mobile/";bookConfig.thumbPath="../files/thumb/";bookConfig.userListPath="../files/extfiles/users.js";var language = [];;function orgt(s){ return binl2hex(core_hx(str2binl(s), s.length * chrsz));};; var pageEditor = {"setting":{"annoPlaying":"true","shoppingCartHTML":"false","shoppingCartOptinon":{"type":"PayPal","paypal":"","method":"POST","sandbox":"false","address":"","theme":"","body":"Hi xxx<br/>   I\'m going to buy below product(s):<br/>    ${shopping}<br/>Full Name","showPrice":"true","showTime":"true"}}, "pageAnnos":[[{"annotype":"com.mobiano.flipbook.pageeditor.TAnnoImage","annoId":"201821235185437","alpha":"1","mouseOverEffect":"2","borderColor":"16737792","Gifview":"-1","imgOriginalProportions":"true","imgScaleType":"false","location":{"tannoName":"image1","x":"-1.1472821339783643","y":"-0.05582478145191942","width":"2.151112006987838","height":"1.0798531927023949","rotation":"0","reflection":"false","reflectionType":"0","reflectionAlpha":"0","pageWidth":"595.32","pageHeight":"841.92"},"hint":{"hintShapeColor":"0","hintShapeColor2":"8388736","hintShapeAlpha":"1","hintW":"0","hintH":"0","hintAuto":"true","hintShapeType":"2","text":""},"shadow":{"hasDropShadow":"true","shadowDistance":"4","shadowAngle":"90","shadowColor":"0","shadowAlpha":"0.6","shadowBlurX":"8","shadowBlurY":"8"},"highlightsBool":"false","imgPosition":"","popUpImage":"false","frame":"frame0","colorMatrix":"original","imgScale":"1","imgRotation":"0","imgContX":"0","imgContY":"0","imgOriginalWidth":"4959","imgOriginalHeight":"3366","url":"./files/pageConfig/-5f0a35bf135ed257.jpg","originalURL":"./files/pageConfig/-5f0a35bf135ed257.jpg","effect":{"effectType":"null","triggerAction":"Note","duration":"1","position":"left"}}],[{"annotype":"com.mobiano.flipbook.pageeditor::TAnnoText","annoId":"201821235181029","alpha":"1","location":{"tannoName":"text1","x":"0.11926358933010817","y":"0.16628658304827063","width":"0.691224887455486","height":"0.7456171607753707","rotation":"0","reflection":"false","reflectionType":"0","reflectionAlpha":"0","pageWidth":"595.32","pageHeight":"841.92"},"hint":{"hintShapeColor":"0","hintShapeColor2":"8388736","hintShapeAlpha":"1","hintW":"0","hintH":"0","hintAuto":"true","hintShapeType":"2","text":""},"shadow":{"hasDropShadow":"false","shadowDistance":"4","shadowAngle":"270","shadowColor":"0","shadowAlpha":"0.6","shadowBlurX":"4","shadowBlurY":"4"},"highlightsBool":"false","selectable":"false","auto":"false","textStr":"<TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"0\" KERNING=\"0\">顾问：赵展  闫向忠</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">主编：荆磊</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">封面设计：李宜容</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">副主编：汪敏璇</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">执行副主编：王喜梅  李媛春  张当当</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">编辑：把美龄  王廷宽  崔碧芸 黄河清                                    王园园  张延红</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">主办单位：兰州财经大学学生会媒体中心</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">官方微信：兰州财经大学学生会</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">新浪微博：@兰州财经大学学生会官微</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">投稿电子邮箱：</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">3364341947@qq.com </FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">征文活动咨询电话：</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">把美龄：18294455605</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">王廷宽：15294210698</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">梁生丽：17393177581</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"Tahoma,Arial,Verdana\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"0\" KERNING=\"0\"> </FONT></P></TEXTFORMAT>","lineHeightRation":"0.045696999999999995","formats":{"defaultFormat":{"htmlText":"<TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"0\" KERNING=\"0\">顾问：赵展  闫向忠</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">主编：荆磊</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">封面设计：李宜容</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">副主编：汪敏璇</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">执行副主编：王喜梅  李媛春  张当当</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">编辑：把美龄  王廷宽  崔碧芸 黄河清                                    王园园  张延红</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">主办单位：兰州财经大学学生会媒体中心</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">官方微信：兰州财经大学学生会</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">新浪微博：@兰州财经大学学生会官微</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">投稿电子邮箱：</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">3364341947@qq.com </FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">征文活动咨询电话：</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">把美龄：18294455605</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">王廷宽：15294210698</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"KaiTi\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"2\" KERNING=\"0\">梁生丽：17393177581</FONT></P></TEXTFORMAT><TEXTFORMAT LEADING=\"12\"><P ALIGN=\"LEFT\"><FONT FACE=\"Tahoma,Arial,Verdana\" SIZE=\"19\" COLOR=\"#000000\" LETTERSPACING=\"0\" KERNING=\"0\"> </FONT></P></TEXTFORMAT>","pageH":"841.92","pageW":"595.32"}},"background":{"alpha":"0.7","fillBg":"false","color":"16777215"}}],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[],[{"annotype":"com.mobiano.flipbook.pageeditor.TAnnoImage","annoId":"201821235181931","alpha":"1","mouseOverEffect":"2","borderColor":"16737792","Gifview":"-1","imgOriginalProportions":"true","imgScaleType":"false","location":{"tannoName":"image3","x":"-0.0016797688638043404","y":"-0.245866590649943","width":"2.1062621783242625","height":"1.4801881413911062","rotation":"0","reflection":"false","reflectionType":"0","reflectionAlpha":"0","pageWidth":"595.32","pageHeight":"841.92"},"hint":{"hintShapeColor":"0","hintShapeColor2":"8388736","hintShapeAlpha":"1","hintW":"0","hintH":"0","hintAuto":"true","hintShapeType":"2","text":""},"shadow":{"hasDropShadow":"true","shadowDistance":"4","shadowAngle":"90","shadowColor":"0","shadowAlpha":"0.6","shadowBlurX":"8","shadowBlurY":"8"},"highlightsBool":"false","imgPosition":"","popUpImage":"false","frame":"frame0","colorMatrix":"original","imgScale":"1","imgRotation":"0","imgContX":"0","imgContY":"0","imgOriginalWidth":"4959","imgOriginalHeight":"3366","url":"./files/pageConfig/-5f0a35bf135ed257.jpg","originalURL":"./files/pageConfig/-5f0a35bf135ed257.jpg","effect":{"effectType":"null","triggerAction":"Note","duration":"1","position":"left"}}]]}; bookConfig.isFlipPdf=true; var pagesInfo =[{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"},{pageColor:"16777215"}];
	bookConfig.hideMiniFullscreen=true;
	if(language&&language.length>0&&language[0]&&language[0].language){
		bookConfig.language=language[0].language;
	}
	
try{
	for(var i=0;pageEditor!=undefined&&i<pageEditor.length;i++){
		if(pageEditor[i].length==0){
			continue;
		}
		for(var j=0;j<pageEditor[i].length;j++){
			var anno=pageEditor[i][j];
			if(anno==undefined)continue;
			if(anno.overAlpha==undefined){
				anno.overAlpha=bookConfig.LinkAlpha;
			}
			if(anno.outAlpha==undefined){
				anno.outAlpha=0;
			}
			if(anno.downAlpha==undefined){
				anno.downAlpha=bookConfig.LinkAlpha;
			}
			if(anno.overColor==undefined){
				anno.overColor=bookConfig.LinkDownColor;
			}
			if(anno.downColor==undefined){
				anno.downColor=bookConfig.LinkDownColor;
			}
			if(anno.outColor==undefined){
				anno.outColor=bookConfig.LinkDownColor;
			}
			if(anno.annotype=='com.mobiano.flipbook.pageeditor.TAnnoLink'){
				anno.alpha=bookConfig.LinkAlpha;
			}
		}
	}
}catch(e){
}
try{
	$.browser.device = 2;
}catch(ee){
}