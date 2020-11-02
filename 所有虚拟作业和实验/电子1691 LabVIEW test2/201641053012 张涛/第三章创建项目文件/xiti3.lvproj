<?xml version='1.0' encoding='UTF-8'?>
<Project Type="Project" LVVersion="17008000">
	<Item Name="我的电脑" Type="My Computer">
		<Property Name="server.app.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.control.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="server.tcp.enabled" Type="Bool">false</Property>
		<Property Name="server.tcp.port" Type="Int">0</Property>
		<Property Name="server.tcp.serviceName" Type="Str">我的电脑/VI服务器</Property>
		<Property Name="server.tcp.serviceName.default" Type="Str">我的电脑/VI服务器</Property>
		<Property Name="server.vi.callsEnabled" Type="Bool">true</Property>
		<Property Name="server.vi.propertiesEnabled" Type="Bool">true</Property>
		<Property Name="specify.custom.address" Type="Bool">false</Property>
		<Item Name="3.1.vi" Type="VI" URL="../3.1.vi"/>
		<Item Name="3.2.vi" Type="VI" URL="../3.2.vi"/>
		<Item Name="3.3.vi" Type="VI" URL="../3.3.vi"/>
		<Item Name="3.4.vi" Type="VI" URL="../3.4.vi"/>
		<Item Name="3.5.vi" Type="VI" URL="../3.5.vi"/>
		<Item Name="依赖关系" Type="Dependencies">
			<Item Name="3-1.vi" Type="VI" URL="../../3-1.vi"/>
			<Item Name="3-2.vi" Type="VI" URL="../../3-2.vi"/>
			<Item Name="3-3.vi" Type="VI" URL="../../3-3.vi"/>
			<Item Name="3-4.vi" Type="VI" URL="../../3-4.vi"/>
			<Item Name="3-5.vi" Type="VI" URL="../../3-5.vi"/>
		</Item>
		<Item Name="程序生成规范" Type="Build"/>
	</Item>
</Project>
