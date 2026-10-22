/*
 * FUN_006AD540 (2215 B) — .text data-block initializer. Builds a large
 * table of pointer-structs at 0x0082DB30..0x0082DEF0 by filling a 32-byte
 * stack buffer with 8 data pointers + an index/count, then `rep movsd`
 * (ecx=8) copying it to successive 32-byte destinations. The final entries
 * are built by pushing args and calling FUN_006ADDF0 (a __thiscall
 * constructor that copies 8 dwords from the stack into this[0..7]).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned long g_0069d4a0;
extern unsigned long g_0069dde0;
extern unsigned long g_0069e250;
extern unsigned long g_006ade30;
extern unsigned long g_0069e1a0;
extern unsigned long g_0069e820;
extern unsigned long g_0069e8b0;
extern unsigned long g_0069e8c0;
extern unsigned long g_0069e8e0;
extern unsigned long g_006ade40;
extern unsigned long g_0069e8d0;
extern unsigned long g_006ade50;
extern unsigned long g_0069e8f0;
extern unsigned long g_0069e900;
extern unsigned long g_0069e920;
extern unsigned long g_006ade60;
extern unsigned long g_0069e910;
extern unsigned long g_0069e930;
extern unsigned long g_006b2070;
extern unsigned long g_006b2430;
extern unsigned long g_006b24f0;
extern unsigned long g_006b2290;
extern unsigned long g_006b2320;
extern unsigned long g_006b23b0;
extern unsigned long g_006ade70;
extern unsigned long g_006ade90;
extern unsigned long g_006adeb0;
extern unsigned long g_006aded0;
extern unsigned long g_006adee0;
extern unsigned long g_006adef0;
extern unsigned long g_006adf00;
extern unsigned long g_006adf20;
extern unsigned long g_006adf40;
extern unsigned long g_006adf60;
extern unsigned long g_006adf70;
extern unsigned long g_006adf80;
extern unsigned long g_006ae030;
extern unsigned long g_006ae050;
extern unsigned long g_006ae070;
extern unsigned long g_006ae090;
extern unsigned long g_006ae0a0;
extern unsigned long g_006ae0b0;
extern unsigned long g_0062ca50;
extern unsigned long g_0062caf0;
extern unsigned long g_0062cb80;
extern unsigned long g_006ae0c0;
extern unsigned long g_0062cb60;
extern unsigned long g_006ae0d0;
extern unsigned long g_006b2670;
extern unsigned long g_006b2aa0;
extern unsigned long g_006b2b70;
extern unsigned long g_006b28e0;
extern unsigned long g_006b2970;
extern unsigned long g_006b2a20;
extern unsigned long g_006ac300;
extern unsigned long g_006ac400;
extern unsigned long g_006ac4f0;
extern unsigned long g_006adf90;
extern unsigned long g_006ac4d0;
extern unsigned long g_006adfa0;
extern unsigned long g_006ac660;
extern unsigned long g_006ac7f0;
extern unsigned long g_006ac890;
extern unsigned long g_006ac730;
extern unsigned long g_006ac750;
extern unsigned long g_006ac770;
extern unsigned long g_006ac950;
extern unsigned long g_006ac9c0;
extern unsigned long g_006acab0;
extern unsigned long g_006adfb0;
extern unsigned long g_006aca20;
extern unsigned long g_006aca30;
extern unsigned long g_006acb30;
extern unsigned long g_006acbb0;
extern unsigned long g_006acca0;
extern unsigned long g_006adfc0;
extern unsigned long g_006acc10;
extern unsigned long g_006acc20;
extern unsigned long g_006acd00;
extern unsigned long g_006acdd0;
extern unsigned long g_006ace60;
extern unsigned long g_006adfd0;
extern unsigned long g_006ace50;
extern unsigned long g_006adfe0;
extern unsigned long g_006acf30;
extern unsigned long g_006acfb0;
extern unsigned long g_006ad0a0;
extern unsigned long g_006adff0;
extern unsigned long g_006ad010;
extern unsigned long g_006ad020;
extern unsigned long g_006b3780;
extern unsigned long g_006b3820;
extern unsigned long g_006b38e0;
extern unsigned long g_006ae1b0;
extern unsigned long g_006b38c0;
extern unsigned long g_006ae1c0;
extern unsigned long g_006b3d60;
extern unsigned long g_006b3ea0;
extern unsigned long g_006b4000;
extern unsigned long g_006ae1d0;
extern unsigned long g_006b3fe0;
extern unsigned long g_006ae1e0;
extern unsigned long g_006b4180;
extern unsigned long g_006b4260;
extern unsigned long g_006b4350;
extern unsigned long g_006ae1f0;
extern unsigned long g_006b4330;
extern unsigned long g_006ae200;
extern unsigned long g_006ad130;
extern unsigned long g_006ad1f0;
extern unsigned long g_006ad2e0;
extern unsigned long g_006ae000;
extern unsigned long g_006ad250;
extern unsigned long g_006ad260;
extern unsigned long g_006ad360;
extern unsigned long g_006ad420;
extern unsigned long g_006ad490;
extern unsigned long g_006ae010;
extern unsigned long g_006ad480;
extern unsigned long g_006ae020;
extern unsigned long g_006b2d50;
extern unsigned long g_006b31f0;
extern unsigned long g_006b3290;
extern unsigned long g_006b3090;
extern unsigned long g_006b31e0;
extern unsigned long g_006ae1a0;
extern unsigned long g_006b07c0;
extern unsigned long g_006b0b30;
extern unsigned long g_006b0e40;
extern unsigned long g_006ae210;
extern unsigned long g_006b0d20;
extern unsigned long g_006b0dc0;
extern unsigned long g_006b1130;
extern unsigned long g_006b1420;
extern unsigned long g_006b1690;
extern unsigned long g_006ae220;
extern unsigned long g_006b15a0;
extern unsigned long g_006b1610;
extern unsigned long g_006b18d0;
extern unsigned long g_006b19a0;
extern unsigned long g_006b1ac0;
extern unsigned long g_006ae230;
extern unsigned long g_006b1a30;
extern unsigned long g_006b1a40;
extern unsigned long g_006b1ff0;
extern unsigned long g_006b1e30;
extern unsigned long g_006ae240;
extern unsigned long g_006b1e70;
extern unsigned long g_006b1d20;
extern unsigned long g_006b1b70;
extern unsigned long g_006ae0f0;
extern unsigned long g_0062cd20;
extern unsigned long g_006ae0e0;
extern unsigned long g_0062cd40;
extern unsigned long g_0062ccb0;
extern unsigned long g_0062cc10;
extern unsigned long g_006ae110;
extern unsigned long g_0062d2a0;
extern unsigned long g_006ae100;
extern unsigned long g_0062d2e0;
extern unsigned long g_0062d150;
extern unsigned long g_0062cde0;
extern unsigned long g_006ae130;
extern unsigned long g_0062d5b0;
extern unsigned long g_006ae120;
extern unsigned long g_0062d5c0;
extern unsigned long g_0062d590;
extern unsigned long g_0062d500;
extern unsigned long g_006ae170;
extern unsigned long g_0062d910;
extern unsigned long g_006ae160;
extern unsigned long g_0062d920;
extern unsigned long g_0062d8f0;
extern unsigned long g_0062d870;
extern unsigned long g_006ae190;
extern unsigned long g_0062dcc0;
extern unsigned long g_006ae180;
extern unsigned long g_0062dcd0;
extern unsigned long g_0062dc80;
extern unsigned long g_0062da00;
extern unsigned long g_006ae150;
extern unsigned long g_0062d680;
extern unsigned long g_006ae140;
extern unsigned long g_0062d690;
extern unsigned long g_0062d660;
extern unsigned long g_0062d610;

extern unsigned long g_0082db30;
extern unsigned long g_0082db50;
extern unsigned long g_0082db70;
extern unsigned long g_0082db90;
extern unsigned long g_0082dbb0;
extern unsigned long g_0082dbd0;
extern unsigned long g_0082dbf0;
extern unsigned long g_0082dc10;
extern unsigned long g_0082dc30;
extern unsigned long g_0082dc50;
extern unsigned long g_0082dc70;
extern unsigned long g_0082dc90;
extern unsigned long g_0082dcb0;
extern unsigned long g_0082dcd0;
extern unsigned long g_0082dcf0;
extern unsigned long g_0082dd10;
extern unsigned long g_0082dd30;
extern unsigned long g_0082dd50;
extern unsigned long g_0082dd70;
extern unsigned long g_0082dd90;
extern unsigned long g_0082ddb0;
extern unsigned long g_0082ddd0;
extern unsigned long g_0082ddf0;
extern unsigned long g_0082de10;
extern unsigned long g_0082de30;
extern unsigned long g_0082de50;
extern unsigned long g_0082de70;
extern unsigned long g_0082de90;
extern unsigned long g_0082deb0;
extern unsigned long g_0082ded0;
extern unsigned long g_0082def0;

extern void FUN_006addf0(void);

__declspec(naked) void FUN_006AD540(void)
{
    __asm {
        sub     esp, 0x20
        push    ebx
        push    esi
        push    edi
        mov     edx, 8
        mov     dword ptr [esp + 0xc], offset g_0069d4a0
        mov     dword ptr [esp + 0x10], offset g_0069dde0
        mov     dword ptr [esp + 0x14], offset g_0069e250
        mov     dword ptr [esp + 0x18], offset g_006ade30
        mov     dword ptr [esp + 0x1c], offset g_0069e1a0
        mov     dword ptr [esp + 0x20], offset g_0069e820
        xor     ebx, ebx
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x28], 0xf
        mov     ecx, edx
        lea     esi, [esp + 0xc]
        mov     edi, offset g_0082db30
        rep movsd
        mov     dword ptr [esp + 0xc], offset g_0069e8b0
        mov     dword ptr [esp + 0x10], offset g_0069e8c0
        mov     dword ptr [esp + 0x14], offset g_0069e8e0
        mov     dword ptr [esp + 0x18], offset g_006ade40
        mov     dword ptr [esp + 0x1c], offset g_0069e8d0
        mov     dword ptr [esp + 0x20], offset g_006ade50
        mov     dword ptr [esp + 0x28], 6
        mov     eax, 1
        mov     dword ptr [esp + 0x24], eax
        mov     ecx, edx
        lea     esi, [esp + 0xc]
        mov     edi, offset g_0082db50
        rep movsd
        mov     dword ptr [esp + 0xc], offset g_0069e8f0
        mov     dword ptr [esp + 0x10], offset g_0069e900
        mov     dword ptr [esp + 0x14], offset g_0069e920
        mov     dword ptr [esp + 0x18], offset g_006ade60
        mov     dword ptr [esp + 0x1c], offset g_0069e910
        mov     dword ptr [esp + 0x20], offset g_0069e930
        mov     dword ptr [esp + 0x24], 2
        mov     dword ptr [esp + 0x28], ebx
        mov     ecx, edx
        lea     esi, [esp + 0xc]
        mov     edi, offset g_0082db70
        rep movsd
        mov     dword ptr [esp + 0xc], offset g_006b2070
        mov     dword ptr [esp + 0x10], offset g_006b2430
        mov     dword ptr [esp + 0x14], offset g_006b24f0
        mov     dword ptr [esp + 0x18], offset g_006b2290
        mov     dword ptr [esp + 0x1c], offset g_006b2320
        mov     dword ptr [esp + 0x20], offset g_006b23b0
        mov     dword ptr [esp + 0x24], 3
        mov     dword ptr [esp + 0x28], ebx
        mov     ecx, edx
        lea     esi, [esp + 0xc]
        mov     edi, offset g_0082db90
        rep movsd
        mov     dword ptr [esp + 0xc], offset g_006ade70
        mov     dword ptr [esp + 0x10], offset g_006ade90
        mov     dword ptr [esp + 0x14], offset g_006adeb0
        mov     dword ptr [esp + 0x18], offset g_006aded0
        mov     dword ptr [esp + 0x1c], offset g_006adee0
        mov     dword ptr [esp + 0x20], offset g_006adef0
        mov     dword ptr [esp + 0x24], 4
        mov     dword ptr [esp + 0x28], ebx
        mov     ecx, edx
        lea     esi, [esp + 0xc]
        mov     edi, offset g_0082dbb0
        rep movsd
        mov     dword ptr [esp + 0xc], offset g_006adf00
        mov     dword ptr [esp + 0x10], offset g_006adf20
        mov     dword ptr [esp + 0x14], offset g_006adf40
        mov     ecx, edx
        lea     esi, [esp + 0xc]
        mov     edi, offset g_0082dbd0
        mov     dword ptr [esp + 0x18], offset g_006adf60
        mov     dword ptr [esp + 0x1c], offset g_006adf70
        mov     dword ptr [esp + 0x20], offset g_006adf80
        mov     dword ptr [esp + 0x24], 5
        mov     dword ptr [esp + 0x28], ebx
        rep movsd
        mov     dword ptr [esp + 0xc], offset g_006ae030
        mov     dword ptr [esp + 0x10], offset g_006ae050
        mov     dword ptr [esp + 0x14], offset g_006ae070
        mov     dword ptr [esp + 0x28], edx
        mov     dword ptr [esp + 0x18], offset g_006ae090
        mov     dword ptr [esp + 0x1c], offset g_006ae0a0
        mov     dword ptr [esp + 0x20], offset g_006ae0b0
        mov     dword ptr [esp + 0x24], 6
        mov     ecx, edx
        lea     esi, [esp + 0xc]
        mov     edi, offset g_0082dbf0
        rep movsd
        mov     dword ptr [esp + 0xc], offset g_0062ca50
        mov     dword ptr [esp + 0x10], offset g_0062caf0
        mov     dword ptr [esp + 0x14], offset g_0062cb80
        mov     dword ptr [esp + 0x18], offset g_006ae0c0
        mov     dword ptr [esp + 0x1c], offset g_0062cb60
        mov     dword ptr [esp + 0x20], offset g_006ae0d0
        mov     dword ptr [esp + 0x24], 7
        mov     dword ptr [esp + 0x28], ebx
        mov     ecx, edx
        lea     esi, [esp + 0xc]
        mov     edi, offset g_0082dc10
        rep movsd
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0xc], offset g_006b2670
        mov     dword ptr [esp + 0x10], offset g_006b2aa0
        mov     dword ptr [esp + 0x14], offset g_006b2b70
        mov     dword ptr [esp + 0x18], offset g_006b28e0
        mov     dword ptr [esp + 0x1c], offset g_006b2970
        mov     dword ptr [esp + 0x20], offset g_006b2a20
        mov     dword ptr [esp + 0x28], eax
        mov     ecx, edx
        lea     esi, [esp + 0xc]
        mov     edi, offset g_0082dc30
        rep movsd
        mov     dword ptr [esp + 0xc], offset g_006ac300
        mov     dword ptr [esp + 0x10], offset g_006ac400
        mov     dword ptr [esp + 0x14], offset g_006ac4f0
        mov     dword ptr [esp + 0x18], offset g_006adf90
        mov     dword ptr [esp + 0x1c], offset g_006ac4d0
        mov     dword ptr [esp + 0x20], offset g_006adfa0
        mov     dword ptr [esp + 0x24], 9
        mov     dword ptr [esp + 0x28], 2
        mov     ecx, edx
        lea     esi, [esp + 0xc]
        mov     edi, offset g_0082dc50
        rep movsd
        mov     dword ptr [esp + 0xc], offset g_006ac660
        mov     dword ptr [esp + 0x10], offset g_006ac7f0
        mov     dword ptr [esp + 0x14], offset g_006ac890
        mov     dword ptr [esp + 0x18], offset g_006ac730
        mov     dword ptr [esp + 0x1c], offset g_006ac750
        mov     dword ptr [esp + 0x20], offset g_006ac770
        mov     dword ptr [esp + 0x24], 0xa
        mov     dword ptr [esp + 0x28], ebx
        mov     ecx, edx
        lea     esi, [esp + 0xc]
        mov     edi, offset g_0082dc70
        rep movsd
        mov     edx, 0xb
        mov     dword ptr [esp + 0xc], offset g_006ac950
        mov     dword ptr [esp + 0x10], offset g_006ac9c0
        mov     dword ptr [esp + 0x14], offset g_006acab0
        mov     dword ptr [esp + 0x18], offset g_006adfb0
        mov     dword ptr [esp + 0x1c], offset g_006aca20
        mov     dword ptr [esp + 0x20], offset g_006aca30
        mov     dword ptr [esp + 0x24], edx
        mov     dword ptr [esp + 0x28], ebx
        mov     ecx, 8
        lea     esi, [esp + 0xc]
        mov     edi, offset g_0082dc90
        rep movsd
        mov     dword ptr [esp + 0xc], offset g_006acb30
        mov     dword ptr [esp + 0x10], offset g_006acbb0
        mov     dword ptr [esp + 0x14], offset g_006acca0
        mov     dword ptr [esp + 0x18], offset g_006adfc0
        mov     dword ptr [esp + 0x1c], offset g_006acc10
        mov     dword ptr [esp + 0x20], offset g_006acc20
        mov     dword ptr [esp + 0x24], 0xc
        mov     dword ptr [esp + 0x28], ebx
        mov     ecx, 8
        lea     esi, [esp + 0xc]
        mov     edi, offset g_0082dcb0
        rep movsd
        mov     dword ptr [esp + 0xc], offset g_006acd00
        mov     dword ptr [esp + 0x10], offset g_006acdd0
        mov     dword ptr [esp + 0x14], offset g_006ace60
        mov     dword ptr [esp + 0x18], offset g_006adfd0
        mov     dword ptr [esp + 0x1c], offset g_006ace50
        mov     dword ptr [esp + 0x20], offset g_006adfe0
        mov     dword ptr [esp + 0x24], 0xd
        mov     dword ptr [esp + 0x28], eax
        mov     ecx, 8
        lea     esi, [esp + 0xc]
        mov     edi, offset g_0082dcd0
        rep movsd
        mov     dword ptr [esp + 0xc], offset g_006acf30
        mov     dword ptr [esp + 0x10], offset g_006acfb0
        mov     dword ptr [esp + 0x14], offset g_006ad0a0
        mov     dword ptr [esp + 0x18], offset g_006adff0
        mov     dword ptr [esp + 0x1c], offset g_006ad010
        mov     dword ptr [esp + 0x20], offset g_006ad020
        mov     dword ptr [esp + 0x24], 0xe
        mov     dword ptr [esp + 0x28], ebx
        mov     ecx, 8
        lea     esi, [esp + 0xc]
        mov     edi, offset g_0082dcf0
        rep movsd
        mov     dword ptr [esp + 0xc], offset g_006b3780
        mov     dword ptr [esp + 0x10], offset g_006b3820
        mov     dword ptr [esp + 0x14], offset g_006b38e0
        mov     dword ptr [esp + 0x18], offset g_006ae1b0
        mov     dword ptr [esp + 0x1c], offset g_006b38c0
        mov     dword ptr [esp + 0x20], offset g_006ae1c0
        mov     dword ptr [esp + 0x24], 0xf
        mov     dword ptr [esp + 0x28], ebx
        mov     ecx, 8
        lea     esi, [esp + 0xc]
        mov     edi, offset g_0082dd10
        rep movsd
        mov     dword ptr [esp + 0xc], offset g_006b3d60
        mov     dword ptr [esp + 0x10], offset g_006b3ea0
        mov     dword ptr [esp + 0x14], offset g_006b4000
        mov     dword ptr [esp + 0x18], offset g_006ae1d0
        mov     dword ptr [esp + 0x1c], offset g_006b3fe0
        mov     dword ptr [esp + 0x20], offset g_006ae1e0
        mov     dword ptr [esp + 0x24], 0x10
        mov     dword ptr [esp + 0x28], ebx
        mov     ecx, 8
        lea     esi, [esp + 0xc]
        mov     edi, offset g_0082dd30
        rep movsd
        mov     dword ptr [esp + 0xc], offset g_006b4180
        mov     dword ptr [esp + 0x10], offset g_006b4260
        mov     dword ptr [esp + 0x14], offset g_006b4350
        mov     dword ptr [esp + 0x18], offset g_006ae1f0
        mov     dword ptr [esp + 0x1c], offset g_006b4330
        mov     dword ptr [esp + 0x20], offset g_006ae200
        mov     dword ptr [esp + 0x24], 0x11
        mov     dword ptr [esp + 0x28], ebx
        mov     ecx, 8
        lea     esi, [esp + 0xc]
        mov     edi, offset g_0082dd50
        rep movsd
        mov     dword ptr [esp + 0xc], offset g_006ad130
        mov     dword ptr [esp + 0x10], offset g_006ad1f0
        mov     dword ptr [esp + 0x14], offset g_006ad2e0
        mov     dword ptr [esp + 0x18], offset g_006ae000
        mov     dword ptr [esp + 0x1c], offset g_006ad250
        mov     dword ptr [esp + 0x20], offset g_006ad260
        mov     dword ptr [esp + 0x24], 0x12
        mov     dword ptr [esp + 0x28], ebx
        mov     ecx, 8
        lea     esi, [esp + 0xc]
        mov     edi, offset g_0082dd70
        rep movsd
        mov     dword ptr [esp + 0xc], offset g_006ad360
        mov     dword ptr [esp + 0x10], offset g_006ad420
        mov     dword ptr [esp + 0x14], offset g_006ad490
        mov     dword ptr [esp + 0x18], offset g_006ae010
        mov     dword ptr [esp + 0x1c], offset g_006ad480
        mov     dword ptr [esp + 0x20], offset g_006ae020
        mov     dword ptr [esp + 0x24], 0x13
        mov     dword ptr [esp + 0x28], ebx
        push    4
        push    0x18
        mov     ecx, 8
        lea     esi, [esp + 0x14]
        mov     edi, offset g_0082dd90
        rep movsd
        mov     dword ptr [esp + 0x14], offset g_006b2d50
        mov     dword ptr [esp + 0x18], offset g_006b31f0
        mov     dword ptr [esp + 0x1c], offset g_006b3290
        mov     dword ptr [esp + 0x20], offset g_006b3090
        mov     dword ptr [esp + 0x24], offset g_006b31e0
        mov     dword ptr [esp + 0x28], offset g_006ae1a0
        mov     dword ptr [esp + 0x2c], 0x14
        mov     dword ptr [esp + 0x30], ebx
        push    offset g_006b1ff0
        mov     ecx, 8
        lea     esi, [esp + 0x18]
        mov     edi, offset g_0082ddb0
        rep movsd
        mov     dword ptr [esp + 0x18], offset g_006b07c0
        mov     dword ptr [esp + 0x1c], offset g_006b0b30
        mov     dword ptr [esp + 0x20], offset g_006b0e40
        mov     dword ptr [esp + 0x24], offset g_006ae210
        mov     dword ptr [esp + 0x28], offset g_006b0d20
        mov     dword ptr [esp + 0x2c], offset g_006b0dc0
        mov     dword ptr [esp + 0x30], 0x15
        mov     dword ptr [esp + 0x34], edx
        push    offset g_006b1e30
        mov     ecx, 8
        lea     esi, [esp + 0x1c]
        mov     edi, offset g_0082ddd0
        rep movsd
        push    offset g_006ae240
        mov     dword ptr [esp + 0x20], offset g_006b1130
        mov     dword ptr [esp + 0x24], offset g_006b1420
        mov     dword ptr [esp + 0x28], offset g_006b1690
        mov     dword ptr [esp + 0x2c], offset g_006ae220
        mov     dword ptr [esp + 0x30], offset g_006b15a0
        mov     dword ptr [esp + 0x34], offset g_006b1610
        mov     dword ptr [esp + 0x38], 0x16
        mov     dword ptr [esp + 0x3c], 7
        mov     ecx, 8
        lea     esi, [esp + 0x20]
        mov     edi, offset g_0082ddf0
        rep movsd
        push    offset g_006b1e70
        mov     dword ptr [esp + 0x24], offset g_006b18d0
        mov     dword ptr [esp + 0x28], offset g_006b19a0
        mov     dword ptr [esp + 0x2c], offset g_006b1ac0
        mov     dword ptr [esp + 0x30], offset g_006ae230
        mov     dword ptr [esp + 0x34], offset g_006b1a30
        mov     dword ptr [esp + 0x38], offset g_006b1a40
        mov     dword ptr [esp + 0x3c], 0x17
        mov     dword ptr [esp + 0x40], ebx
        mov     ecx, 8
        lea     esi, [esp + 0x24]
        mov     edi, offset g_0082de10
        push    offset g_006b1d20
        rep movsd
        push    offset g_006b1b70
        lea     ecx, [esp + 0x2c]
        call    FUN_006addf0
        push    ebx
        push    0x19
        push    offset g_006ae0f0
        push    offset g_0062cd20
        push    offset g_006ae0e0
        push    offset g_0062cd40
        mov     esi, eax
        mov     ecx, 8
        mov     edi, offset g_0082de30
        push    offset g_0062ccb0
        rep movsd
        push    offset g_0062cc10
        lea     ecx, [esp + 0x2c]
        call    FUN_006addf0
        mov     ecx, 8
        mov     esi, eax
        mov     edi, offset g_0082de50
        rep movsd
        push    2
        push    0x1a
        push    offset g_006ae110
        push    offset g_0062d2a0
        push    offset g_006ae100
        push    offset g_0062d2e0
        push    offset g_0062d150
        push    offset g_0062cde0
        lea     ecx, [esp + 0x2c]
        call    FUN_006addf0
        push    ebx
        push    0x1b
        push    offset g_006ae130
        push    offset g_0062d5b0
        push    offset g_006ae120
        push    offset g_0062d5c0
        mov     esi, eax
        mov     ecx, 8
        mov     edi, offset g_0082de70
        push    offset g_0062d590
        rep movsd
        push    offset g_0062d500
        lea     ecx, [esp + 0x2c]
        call    FUN_006addf0
        push    ebx
        push    0x1c
        push    offset g_006ae170
        push    offset g_0062d910
        push    offset g_006ae160
        push    offset g_0062d920
        mov     esi, eax
        mov     ecx, 8
        mov     edi, offset g_0082de90
        push    offset g_0062d8f0
        rep movsd
        push    offset g_0062d870
        lea     ecx, [esp + 0x2c]
        call    FUN_006addf0
        push    ebx
        push    0x1d
        push    offset g_006ae190
        push    offset g_0062dcc0
        push    offset g_006ae180
        push    offset g_0062dcd0
        mov     esi, eax
        mov     ecx, 8
        mov     edi, offset g_0082deb0
        push    offset g_0062dc80
        rep movsd
        push    offset g_0062da00
        lea     ecx, [esp + 0x2c]
        call    FUN_006addf0
        push    ebx
        push    0x1e
        push    offset g_006ae150
        push    offset g_0062d680
        push    offset g_006ae140
        push    offset g_0062d690
        mov     esi, eax
        mov     ecx, 8
        mov     edi, offset g_0082ded0
        push    offset g_0062d660
        rep movsd
        push    offset g_0062d610
        lea     ecx, [esp + 0x2c]
        call    FUN_006addf0
        mov     ecx, 8
        mov     esi, eax
        mov     edi, offset g_0082def0
        rep movsd
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x20
        ret
    }
}
