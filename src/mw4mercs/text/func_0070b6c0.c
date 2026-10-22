/*
 * FUN_0070b6c0 (2975 B) — Display/backbuffer setup routine.
 *
 * __stdcall (RET 8), two params: char param_1, uint param_2.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_85a210;
extern unsigned int g_85a214;
extern unsigned int g_85a220;
extern unsigned int g_85a224;
extern unsigned int g_85a228;
extern unsigned int g_85a254;
extern unsigned int g_85894c;
extern unsigned int g_85a234;
extern unsigned int g_85a250;
extern unsigned int g_85a248;
extern unsigned int g_8597b0;
extern unsigned int g_8597b4;
extern unsigned int g_8597b8;
extern unsigned int g_8b2520;
extern unsigned int g_7b73e8;
extern unsigned int g_85a20c;
extern unsigned int g_7b7064;
extern unsigned int g_858c00;
extern unsigned int g_858ba0;
extern unsigned int g_858948;
extern unsigned int g_858940;
extern unsigned int g_858944;
extern unsigned int g_85a22c;
extern unsigned int g_85a230;
extern unsigned int g_858bf8;
extern unsigned int g_85a018;
extern unsigned int g_85a160;
extern unsigned int g_85a1b4;
extern unsigned int g_859da8;
extern unsigned int g_85a138;
extern unsigned int g_85a1b8;
extern unsigned int g_85a1bc;
extern unsigned int g_85a1c0;
extern unsigned int g_85a0c8;
extern unsigned int g_85a0e0;
extern unsigned int g_85a244;
extern unsigned int g_85a1f4;
extern unsigned int g_8aaf04;
extern unsigned int g_8b7a28;
extern unsigned int g_858964;
extern unsigned int g_85895c;
extern unsigned int g_859db0;
extern unsigned int g_859f88;
extern unsigned int g_859f74;
extern unsigned int g_859f78;
extern unsigned int g_859f68;
extern unsigned int g_859f8c;
extern unsigned int g_859f90;
extern unsigned int g_859f84;
extern unsigned int g_859fb4;
extern unsigned int g_859fb0;
extern unsigned int g_859fac;
extern unsigned int g_859d90;
extern unsigned int g_859d94;
extern unsigned int g_859d98;
extern unsigned int g_859d9c;
extern unsigned int g_859da0;
extern unsigned int g_859da4;
extern unsigned int g_859f28;
extern unsigned int g_896c88;

extern unsigned char g_87dd0a;
extern unsigned char g_858959;
extern unsigned char g_858958;
extern unsigned char g_858957;
extern unsigned char g_858956;
extern unsigned char g_858955;
extern unsigned char g_859afe;
extern unsigned char g_859af7;
extern unsigned char g_85a1f8;

extern void *g_76b05c;   /* GetDeviceCaps IAT */
extern void *g_76b4c0;   /* WaitMessage IAT */

extern void __cdecl FUN_00735230(void);
extern void __cdecl FUN_0073e160(void);
extern void __cdecl FUN_006fab90(void);
extern void __cdecl FUN_007357d0(void);
extern void __cdecl FUN_007351f0(void);
extern void __cdecl FUN_00734f10(void);
extern void __cdecl FUN_007358a0(void);
extern void __cdecl FUN_007355d0(void);
extern void __cdecl FUN_007353f0(void);
extern void __cdecl FUN_00735440(void);
extern void __cdecl FUN_00735710(void);
extern void __cdecl FUN_00735030(void);
extern void __cdecl FUN_00735810(void);
extern void __cdecl FUN_00710b40(void);
extern void __cdecl FUN_00740d60(void);
extern void __cdecl FUN_006faa30(void);
extern void __cdecl FUN_0072d830(void);
extern void __cdecl FUN_0074a150(void);
extern void __cdecl FUN_0074a4a0(void);
extern void __cdecl FUN_0074a550(void);
extern void __cdecl FUN_0074a5e0(void);
extern void __cdecl FUN_0074ada0(void);
extern void __cdecl FUN_00740db0(void);
extern void __cdecl FUN_00735850(void);

__declspec(naked) void __stdcall FUN_0070b6c0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xf4
        mov     cl, byte ptr [ebp + 8]
        xor     eax, eax
        push    ebx
        xor     ebx, ebx
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        cmp     esi, ebx
        setz    al
        mov     dl, cl
        neg     dl
        push    edi
        mov     dword ptr [g_85a210], ebx
        mov     dword ptr [g_85a214], ebx
        mov     dword ptr [g_85a228], ebx
        mov     dword ptr [g_85a254], eax
        mov     eax, dword ptr [g_85894c]
        sbb     edx, edx
        and     eax, edx
        mov     edx, eax
        shl     edx, 4
        add     edx, eax
        cmp     esi, ebx
        lea     eax, [eax + edx*8]
        lea     eax, [eax + eax*2]
        __emit 0x8D  /* __emit: no-base SIB form lea edx,[eax*8+0x8abe60] not encodable natively */
        __emit 0x14
        __emit 0xC5
        __emit 0x60
        __emit 0xBE
        __emit 0x8A
        __emit 0x00
        mov     dword ptr [g_85a234], ebx
        mov     dword ptr [g_85a250], ebx
        mov     dword ptr [g_85a248], ebx
        mov     dword ptr [ebp - 0x80], edx
        jnz     L_b760
        cmp     dword ptr [g_8597b0], 2
        jnz     L_b74f
        mov     esi, dword ptr [g_8597b4]
        mov     eax, dword ptr [edx + 0xbcc]
        mov     edx, dword ptr [g_8597b8]
        not     esi
        and     eax, esi
        or      eax, edx
        jmp     L_b762
L_b74f:
        mov     eax, dword ptr [g_8597b4]
        cmp     eax, ebx
        jnz     L_b762
        mov     eax, dword ptr [edx + 0xbcc]
        jmp     L_b762
L_b760:
        xor     eax, eax
L_b762:
        mov     esi, eax
        not     esi
        shr     esi, 9
        mov     edx, 1
        and     esi, edx
        cmp     cl, bl
        mov     dword ptr [g_8b2520], eax
        mov     dword ptr [g_7b73e8], esi
        mov     dword ptr [g_85a20c], ebx
        jz      L_b793
        cmp     byte ptr [g_858959], bl
        jz      L_b793
        mov     dword ptr [g_85a20c], edx
L_b793:
        test    al, 8
        jz      L_b79d
        mov     dword ptr [g_85a20c], ebx
L_b79d:
        test    al, 0x10
        mov     esi, 0x10
        jz      L_b7b0
        cmp     cl, bl
        mov     dword ptr [g_7b7064], edx
        jnz     L_b7b6
L_b7b0:
        mov     dword ptr [g_7b7064], ebx
L_b7b6:
        mov     ecx, dword ptr [g_858c00]
        push    0xc
        push    ecx
        call    dword ptr [g_76b05c]
        mov     edx, dword ptr [g_85a254]
        cmp     edx, ebx
        mov     dword ptr [g_858ba0], eax
        jz      L_b7e1
        cmp     eax, esi
        jz      L_b7e1
        cmp     eax, 0x20
        jnz     L_c176
L_b7e1:
        cmp     byte ptr [ebp + 8], bl
        jz      L_ba34
        cmp     edx, ebx
        jnz     L_b951
        cmp     byte ptr [g_858957], bl
        mov     eax, dword ptr [g_858948]
        jz      L_b809
        cmp     eax, esi
        jz      L_b951
        jmp     L_b811
L_b809:
        cmp     eax, esi
        jz      L_b89e
L_b811:
        mov     edx, dword ptr [g_858940]
        xor     eax, eax
        push    ebx
        mov     ecx, 0x1f
        lea     edi, [ebp - 0x7c]
        rep     stosd
        mov     eax, dword ptr [g_858944]
        push    0x85a214
        lea     ecx, [ebp - 0x7c]
        mov     dword ptr [ebp - 0x70], edx
        mov     edx, dword ptr [g_85a22c]
        push    ecx
        mov     esi, 0x7c
        push    edx
        mov     dword ptr [ebp - 0x7c], esi
        mov     dword ptr [ebp - 0x78], 0x1007
        mov     dword ptr [ebp - 0x14], 0x2840
        mov     dword ptr [ebp - 0x74], eax
        mov     dword ptr [ebp - 0x34], 0x20
        mov     dword ptr [ebp - 0x30], 0x40
        mov     dword ptr [ebp - 0x28], 0x10
        mov     dword ptr [ebp - 0x24], 0x7c00
        mov     dword ptr [ebp - 0x20], 0x3e0
        mov     dword ptr [ebp - 0x1c], 0x1f
        mov     byte ptr [g_87dd0a], 1
        call    FUN_00735230
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jl      L_c176
        jmp     L_bb69
L_b89e:
        xor     eax, eax
        push    ebx
        mov     ecx, 0x1f
        lea     edi, [ebp - 0x7c]
        rep     stosd
        mov     ecx, dword ptr [g_85a230]
        push    0x85a210
        lea     eax, [ebp - 0x7c]
        push    eax
        mov     esi, 0x7c
        push    ecx
        mov     dword ptr [ebp - 0x7c], esi
        mov     dword ptr [ebp - 0x78], 1
        mov     dword ptr [ebp - 0x14], 0x200
        call    FUN_00735230
        mov     edx, dword ptr [g_858940]
        xor     eax, eax
        push    ebx
        mov     ecx, 0x1f
        lea     edi, [ebp - 0x7c]
        rep     stosd
        mov     eax, dword ptr [g_858944]
        push    0x85a214
        lea     ecx, [ebp - 0x7c]
        mov     dword ptr [ebp - 0x70], edx
        mov     edx, dword ptr [g_85a230]
        push    ecx
        push    edx
        mov     dword ptr [ebp - 0x7c], esi
        mov     dword ptr [ebp - 0x78], 7
        mov     dword ptr [ebp - 0x14], 0x2840
        mov     dword ptr [ebp - 0x74], eax
        mov     byte ptr [g_87dd0a], 1
        call    FUN_00735230
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jge     L_bb69
        push    eax
        call    FUN_0073e160
        push    eax
        push    0x7a1748
        call    FUN_006fab90
        add     esp, 8
        test    eax, eax
        jz      L_bb69
        int     3
        jmp     L_bb69          /* dead code after int 3 (E9 18 02 00 00) — reproduce to keep branch offsets */
L_b951:
        xor     eax, eax
        mov     ecx, 0x1f
        lea     edi, [ebp - 0x7c]
        rep     stosd
        cmp     byte ptr [g_858956], bl
        mov     esi, 0x7c
        mov     dword ptr [ebp - 0x7c], esi
        mov     dword ptr [ebp - 0x78], 0x21
        mov     dword ptr [ebp - 0x14], 0x6218
        jz      L_b986
        cmp     edx, ebx
        mov     dword ptr [ebp - 0x10], 0x100
        jnz     L_b989
L_b986:
        mov     dword ptr [ebp - 0x10], ebx
L_b989:
        mov     ecx, dword ptr [g_85a20c]
        mov     edx, dword ptr [g_85a230]
        xor     eax, eax
        cmp     ecx, ebx
        setnz   al
        push    ebx
        push    0x85a210
        lea     ecx, [ebp - 0x7c]
        push    ecx
        push    edx
        mov     byte ptr [g_87dd0a], 1
        inc     eax
        mov     dword ptr [ebp - 0x68], eax
        call    FUN_00735230
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jge     L_b9f3
        mov     ecx, dword ptr [g_85a230]
        push    ebx
        push    0x85a210
        lea     eax, [ebp - 0x7c]
        push    eax
        push    ecx
        mov     dword ptr [ebp - 0x68], 1
        mov     byte ptr [g_87dd0a], 1
        call    FUN_00735230
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jl      L_c176
L_b9f3:
        mov     ecx, dword ptr [g_85a210]
        xor     edx, edx
        mov     dword ptr [ebp - 0x90], edx
        push    0x85a214
        lea     eax, [ebp - 0x90]
        mov     dword ptr [ebp - 0x8c], edx
        push    eax
        mov     dword ptr [ebp - 0x88], edx
        push    ecx
        mov     dword ptr [ebp - 0x84], edx
        mov     dword ptr [ebp - 0x90], 4
        call    FUN_007357d0
        jmp     L_bb69
L_ba34:
        cmp     edx, ebx
        jnz     L_ba40
        cmp     eax, esi
        jnz     L_b811
L_ba40:
        mov     ecx, 0x1f
        xor     eax, eax
        lea     edi, [ebp - 0x7c]
        rep     stosd
        mov     edi, dword ptr [g_76b4c0]
        mov     esi, 0x7c
        mov     dword ptr [ebp - 0x7c], esi
        mov     dword ptr [ebp - 0x78], 1
        mov     dword ptr [ebp - 0x14], 0x200
L_ba68:
        mov     ecx, dword ptr [g_85a22c]
        push    ebx
        push    0x85a210
        lea     eax, [ebp - 0x7c]
        push    eax
        push    ecx
        mov     byte ptr [g_87dd0a], 1
        mov     dword ptr [g_85a210], ebx
        call    FUN_00735230
        cmp     eax, 0x8876024e
        mov     byte ptr [g_87dd0a], bl
        jz      L_baa0
        cmp     dword ptr [g_85a210], ebx
        jnz     L_baa4
L_baa0:
        call    edi
        jmp     L_ba68
L_baa4:
        mov     edx, dword ptr [g_85a22c]
        push    ebx
        push    0x85a228
        push    ebx
        push    edx
        call    FUN_007351f0
        mov     eax, dword ptr [g_858bf8]
        mov     ecx, dword ptr [g_85a228]
        push    eax
        push    ebx
        push    ecx
        call    FUN_00734f10
        mov     edx, dword ptr [g_85a228]
        mov     eax, dword ptr [g_85a210]
        push    edx
        push    eax
        call    FUN_007358a0
        xor     eax, eax
        mov     ecx, 0x1f
        lea     edi, [ebp - 0x7c]
        rep     stosd
        mov     ecx, dword ptr [g_85a254]
        cmp     ecx, ebx
        mov     dword ptr [ebp - 0x7c], esi
        mov     dword ptr [ebp - 0x78], 7
        jnz     L_bb09
        cmp     byte ptr [g_858957], bl
        mov     eax, 0x800
        jz      L_bb0e
L_bb09:
        mov     eax, 0x4000
L_bb0e:
        add     eax, 0x2040
        mov     dword ptr [ebp - 0x14], eax
        cmp     byte ptr [g_858956], bl
        jz      L_bb29
        cmp     ecx, ebx
        mov     dword ptr [ebp - 0x10], 0x100
        jnz     L_bb2c
L_bb29:
        mov     dword ptr [ebp - 0x10], ebx
L_bb2c:
        mov     ecx, dword ptr [g_858940]
        mov     edx, dword ptr [g_858944]
        push    ebx
        push    0x85a214
        lea     eax, [ebp - 0x7c]
        mov     dword ptr [ebp - 0x70], ecx
        mov     ecx, dword ptr [g_85a22c]
        push    eax
        push    ecx
        mov     dword ptr [ebp - 0x74], edx
        mov     byte ptr [g_87dd0a], 1
        call    FUN_00735230
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jl      L_c176
L_bb69:
        lea     edx, [ebp - 0xf4]
        push    edx
        push    0x1000400
        push    ebx
        xor     eax, eax
        push    ebx
        mov     ecx, 0x19
        lea     edi, [ebp - 0xf4]
        rep     stosd
        mov     eax, dword ptr [g_85a214]
        push    ebx
        push    eax
        mov     dword ptr [ebp - 0xf4], 0x64
        call    FUN_007355d0
        mov     ecx, dword ptr [g_85a214]
        push    ebx
        push    0x811
        push    0x85a018
        push    ebx
        push    ecx
        mov     dword ptr [g_85a018], esi
        call    FUN_007353f0
        mov     edx, dword ptr [g_85a214]
        push    ebx
        push    edx
        call    FUN_00735440
        xor     eax, eax
        mov     ecx, 0x1f
        mov     edi, 0x85a160
        rep     stosd
        mov     eax, dword ptr [g_85a214]
        push    0x85a160
        push    eax
        mov     dword ptr [g_85a160], esi
        call    FUN_00735710
        mov     eax, dword ptr [g_8b2520]
        __emit 0xF6  /* __emit: MSVC6 rejects test ah, imm8 */
        __emit 0xC4
        __emit 0x01
        jz      L_bc04
        cmp     dword ptr [g_85a1b4], 0x20
        jz      L_bc04
        mov     byte ptr [g_858958], bl
L_bc04:
        cmp     dword ptr [g_85a254], ebx
        mov     dword ptr [g_859da8], 0x17c
        jz      L_bc25
        mov     ecx, dword ptr [g_85a230]
        push    ebx
        push    0x859da8
        push    ecx
        jmp     L_bc32
L_bc25:
        mov     edx, dword ptr [g_85a230]
        push    0x859da8
        push    ebx
        push    edx
L_bc32:
        call    FUN_00735030
        cmp     byte ptr [g_858955], bl
        jz      L_bc4a
        mov     dword ptr [g_85a234], ebx
        jmp     L_be05
L_bc4a:
        mov     edx, dword ptr [g_85a254]
        cmp     edx, ebx
        jz      L_bd07
        cmp     byte ptr [g_858958], bl
        jnz     L_bc80
        cmp     dword ptr [g_85a1b4], 0x20
        jnz     L_bd07
        mov     eax, dword ptr [ebp - 0x80]
        cmp     dword ptr [eax + 0xbac], 0x1000000
        jbe     L_bd07
L_bc80:
        mov     edx, dword ptr [g_858944]
        xor     eax, eax
        mov     ecx, 0x1f
        lea     edi, [ebp - 0x7c]
        rep     stosd
        mov     ecx, dword ptr [g_858940]
        mov     eax, 0x20
        push    ebx
        mov     dword ptr [ebp - 0x34], eax
        mov     dword ptr [ebp - 0x28], eax
        push    0x85a234
        lea     eax, [ebp - 0x7c]
        mov     dword ptr [ebp - 0x70], ecx
        mov     ecx, dword ptr [g_85a230]
        push    eax
        push    ecx
        mov     dword ptr [ebp - 0x7c], esi
        mov     dword ptr [ebp - 0x78], 0x1007
        mov     dword ptr [ebp - 0x14], 0x24000
        mov     dword ptr [ebp - 0x74], edx
        mov     dword ptr [ebp - 0x30], 0x4400
        mov     dword ptr [ebp - 0x20], 0xffffff00
        mov     dword ptr [ebp - 0x24], 8
        mov     dword ptr [ebp - 0x1c], 0xff
        mov     byte ptr [g_87dd0a], 1
        call    FUN_00735230
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jge     L_bdce
        mov     edx, dword ptr [g_85a254]
L_bd07:
        xor     eax, eax
        neg     edx
        sbb     edx, edx
        and     edx, 0x3800
        add     edx, 0x800
        or      edx, 0x20000
        mov     ecx, 0x1f
        lea     edi, [ebp - 0x7c]
        rep     stosd
        mov     eax, dword ptr [g_858944]
        push    ebx
        mov     dword ptr [ebp - 0x14], edx
        mov     edx, dword ptr [g_858940]
        push    0x85a234
        lea     ecx, [ebp - 0x7c]
        mov     dword ptr [ebp - 0x70], edx
        mov     edx, dword ptr [g_85a230]
        push    ecx
        push    edx
        mov     dword ptr [ebp - 0x7c], esi
        mov     dword ptr [ebp - 0x78], 0x1007
        mov     dword ptr [ebp - 0x74], eax
        mov     dword ptr [ebp - 0x34], 0x20
        mov     dword ptr [ebp - 0x30], 0x400
        mov     dword ptr [ebp - 0x28], 0x10
        mov     dword ptr [ebp - 0x20], 0xffff
        mov     byte ptr [g_87dd0a], 1
        call    FUN_00735230
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jge     L_bdce
        mov     edx, dword ptr [g_858948]
        mov     ecx, 0x20
        cmp     edx, ecx
        jnz     L_bdc6
        push    ebx
        push    0x85a234
        lea     eax, [ebp - 0x7c]
        mov     dword ptr [ebp - 0x28], ecx
        mov     ecx, dword ptr [g_85a230]
        push    eax
        push    ecx
        mov     dword ptr [ebp - 0x20], 0xffffffff
        mov     byte ptr [g_87dd0a], 1
        call    FUN_00735230
        mov     byte ptr [g_87dd0a], bl
L_bdc6:
        cmp     eax, ebx
        jl      L_c176
L_bdce:
        mov     edx, dword ptr [g_85a234]
        mov     eax, dword ptr [g_85a214]
        push    edx
        push    eax
        call    FUN_00735810
        xor     eax, eax
        mov     ecx, 0x1f
        mov     edi, 0x85a0e0
        rep     stosd
        mov     ecx, dword ptr [g_85a234]
        push    0x85a0e0
        push    ecx
        mov     dword ptr [g_85a0e0], esi
        call    FUN_00735710
L_be05:
        mov     edi, dword ptr [g_85a138]
        mov     eax, dword ptr [g_85a1b8]
        cmp     edi, 8
        push    eax
        setz    dl
        push    0xffffff
        mov     byte ptr [g_85a1f8], dl
        call    FUN_00710b40
        mov     ecx, dword ptr [g_85a1bc]
        push    ecx
        mov     esi, eax
        push    0xffffff
        shl     esi, 8
        call    FUN_00710b40
        mov     edx, dword ptr [g_85a1c0]
        push    edx
        add     esi, eax
        push    0xffffff
        shl     esi, 8
        call    FUN_00710b40
        push    0x85a244
        add     esi, eax
        mov     eax, dword ptr [g_85a230]
        push    0x7a2b30
        push    eax
        mov     dword ptr [g_85a0c8], esi
        call    FUN_00740d60
        push    ebx
        push    ebx
        call    FUN_006faa30
        mov     eax, dword ptr [ebp + 0xc]
        cmp     eax, 3
        mov     dword ptr [g_85a1f4], ebx
        jc      L_beea
        cmp     dword ptr [g_85a1b4], 0x10
        jz      L_bead
        mov     ecx, dword ptr [g_896c88]
        push    0x2726
        push    ecx
        call    FUN_0072d830
        push    eax
        call    FUN_006fab90
        add     esp, 4
        test    eax, eax
        jz      L_bead
        int     3
L_bead:
        cmp     byte ptr [g_859afe], bl
        mov     byte ptr [g_87dd0a], 1
        push    0x85a250
        jz      L_bed2
        mov     edx, dword ptr [g_85a214]
        push    edx
        push    0x7a2b50
        jmp     L_bf9a
L_bed2:
        mov     ecx, dword ptr [g_85a214]
        mov     edx, dword ptr [g_85a244]
        push    ecx
        push    0x7a3450
        push    edx
        jmp     L_bfa0
L_beea:
        cmp     eax, ebx
        jnz     L_bf69
        cmp     dword ptr [g_8aaf04], ebx
        mov     byte ptr [g_87dd0a], 1
        push    0x85a250
        jz      L_bf19
        mov     eax, dword ptr [g_85a214]
        mov     ecx, dword ptr [g_85a244]
        push    eax
        push    0x7a2b60
        push    ecx
        jmp     L_bfa0
L_bf19:
        mov     edx, dword ptr [g_85a214]
        mov     eax, dword ptr [g_85a244]
        push    edx
        push    0x7a2ba0
        push    eax
        call    FUN_0074a150
        mov     edi, eax
        cmp     edi, ebx
        mov     byte ptr [g_87dd0a], bl
        jge     L_bf5d
        mov     ecx, dword ptr [g_85a214]
        mov     edx, dword ptr [g_85a244]
        push    0x85a250
        push    ecx
        push    0x7a2b60
        mov     byte ptr [g_87dd0a], 1
        push    edx
        jmp     L_bfa0
L_bf5d:
        mov     dword ptr [g_85a1f4], 1
        jmp     L_bfad
L_bf69:
        cmp     eax, 1
        mov     byte ptr [g_87dd0a], 1
        push    0x85a250
        jnz     L_bf8e
        mov     eax, dword ptr [g_85a214]
        mov     ecx, dword ptr [g_85a244]
        push    eax
        push    0x7a2b50
        push    ecx
        jmp     L_bfa0
L_bf8e:
        mov     edx, dword ptr [g_85a214]
        push    edx
        push    0x7a2b80
L_bf9a:
        mov     eax, dword ptr [g_85a244]
        push    eax
L_bfa0:
        call    FUN_0074a150
        mov     edi, eax
        mov     byte ptr [g_87dd0a], bl
L_bfad:
        push    ebx
        push    1
        call    FUN_006faa30
        cmp     edi, ebx
        jl      L_c176
        mov     eax, dword ptr [g_85a250]
        mov     ecx, dword ptr [g_858940]
        mov     edx, dword ptr [g_858944]
        push    0x859d90
        push    eax
        mov     dword ptr [g_85a248], eax
        mov     dword ptr [g_859d90], ebx
        mov     dword ptr [g_859d94], ebx
        mov     dword ptr [g_859d98], ecx
        mov     dword ptr [g_859d9c], edx
        mov     dword ptr [g_859da0], 0
        mov     dword ptr [g_859da4], 0x3f800000
        call    FUN_0074a4a0
        mov     eax, dword ptr [g_85a248]
        push    0x859f28
        push    eax
        call    FUN_0074a550
        mov     eax, dword ptr [g_859fb4]
        cmp     eax, ebx
        jz      L_c03f
        mov     ecx, dword ptr [g_859f84]
        and     ecx, 0x40
        test    cl, cl
        jnz     L_c03f
        cmp     eax, dword ptr [g_859fb0]
        ja      L_c03f
        or      dword ptr [g_859f84], 0x40
L_c03f:
        mov     eax, dword ptr [g_8b2520]
        test    eax, 0x10000
        jz      L_c05c
        mov     ecx, 0x100
        mov     dword ptr [g_859fb0], ecx
        mov     dword ptr [g_859fac], ecx
L_c05c:
        test    eax, 0x20000
        jz      L_c06a
        or      dword ptr [g_859f84], 0x20
L_c06a:
        mov     edx, dword ptr [g_85a248]
        push    ebx
        push    0x74b260
        push    edx
        mov     dword ptr [g_8b7a28], ebx
        mov     byte ptr [g_87dd0a], 1
        call    FUN_0074a5e0
        cmp     eax, ebx
        mov     byte ptr [g_87dd0a], bl
        jl      L_c176
        cmp     dword ptr [g_8b7a28], ebx
        jz      L_c176
        cmp     byte ptr [g_859af7], bl
        jnz     L_c166
        cmp     dword ptr [g_85a254], ebx
        jz      L_c166
        mov     edx, dword ptr [g_8b2520]
        test    edx, 0x80000
        mov     ecx, dword ptr [ebp - 0x80]
        mov     eax, dword ptr [ecx + 0xbac]
        jz      L_c0d4
        add     eax, eax
L_c0d4:
        test    dh, 0x40
        jnz     L_c0df
        add     eax, dword ptr [ecx + 0xbb0]
L_c0df:
        mov     ecx, dword ptr [g_858964]
        cmp     ecx, ebx
        jz      L_c0f4
        shl     ecx, 0xa
        cmp     eax, ecx
        jc      L_c176
L_c0f4:
        test    dh, 8
        jnz     L_c176
        cmp     dword ptr [g_85895c], ebx
        jz      L_c10d
        mov     eax, dword ptr [g_859db0]
        and     eax, 2
        test    al, al
        jnz     L_c176
L_c10d:
        mov     ecx, dword ptr [g_859f88]
        and     ecx, 1
        test    cl, cl
        jz      L_c176
        mov     edx, dword ptr [g_859f74]
        and     edx, 0x10
        test    dl, dl
        jz      L_c176
        mov     eax, dword ptr [g_859f78]
        and     eax, 0x20
        test    al, al
        jz      L_c176
        mov     ecx, dword ptr [g_859f68]
        and     ecx, 0x10
        test    cl, cl
        jz      L_c176
        mov     edx, dword ptr [g_859f8c]
        and     edx, 2
        test    dl, dl
        jz      L_c176
        mov     eax, dword ptr [g_859f90]
        and     eax, 1
        test    al, al
        jz      L_c176
        mov     ecx, dword ptr [g_859f84]
        and     ecx, 1
        test    cl, cl
        jz      L_c176
L_c166:
        call    FUN_0074ada0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
L_c176:
        mov     eax, dword ptr [g_85a248]
        cmp     eax, ebx
        jz      L_c191
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_85a248], ebx
        mov     dword ptr [g_85a250], ebx
L_c191:
        mov     eax, dword ptr [g_85a244]
        cmp     eax, ebx
        jz      L_c1a6
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_85a244], ebx
L_c1a6:
        mov     eax, dword ptr [g_85a234]
        cmp     eax, ebx
        jz      L_c1db
        mov     edx, dword ptr [g_85a214]
        push    eax
        push    ebx
        push    edx
        mov     byte ptr [g_87dd0a], 1
        call    FUN_00735850
        mov     eax, dword ptr [g_85a234]
        push    eax
        mov     byte ptr [g_87dd0a], bl
        call    FUN_00740db0
        mov     dword ptr [g_85a234], ebx
L_c1db:
        cmp     dword ptr [g_85a228], ebx
        jz      L_c205
        mov     eax, dword ptr [g_85a210]
        cmp     eax, ebx
        jz      L_c1f3
        push    ebx
        push    eax
        call    FUN_007358a0
L_c1f3:
        mov     ecx, dword ptr [g_85a228]
        push    ecx
        call    FUN_00740db0
        mov     dword ptr [g_85a228], ebx
L_c205:
        mov     eax, dword ptr [g_85a220]
        cmp     eax, ebx
        jz      L_c21a
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_85a220], ebx
L_c21a:
        mov     eax, dword ptr [g_85a224]
        cmp     eax, ebx
        jz      L_c22f
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_85a224], ebx
L_c22f:
        mov     eax, dword ptr [g_85a214]
        cmp     eax, ebx
        jz      L_c244
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_85a214], ebx
L_c244:
        mov     eax, dword ptr [g_85a210]
        cmp     eax, ebx
        jz      L_c259
        push    eax
        call    FUN_00740db0
        mov     dword ptr [g_85a210], ebx
L_c259:
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     8
    }
}
