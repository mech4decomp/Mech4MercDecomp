/* func_0070A170.c -- in-.text data block 0x70A170 (1317 B)
 * Disassembled from reference\MW4Mercs.exe.  Graphics/display init routine
 * with heavy global-state setup and a palette/format conversion loop.
 */

extern unsigned int g_858940;
extern unsigned int g_858944;
extern unsigned int g_85a218;
extern unsigned int g_85a22c;
extern unsigned int g_85a21c;
extern unsigned int g_85a214;
extern unsigned int g_8aaf30;
extern unsigned int g_8aaf2c;
extern unsigned int g_85a204;
extern unsigned int g_85a238;
extern unsigned int g_85a244;
extern unsigned int g_85a24c;
extern unsigned int g_85a248;
extern unsigned int g_859d90;
extern unsigned int g_859d94;
extern unsigned int g_859d98;
extern unsigned int g_859d9c;
extern unsigned int g_859da0;
extern unsigned int g_859da4;
extern unsigned int g_85a254;
extern unsigned int g_858950;
extern unsigned int g_87c1d0[];
extern unsigned int g_859d30[];
extern unsigned char g_85a1df;
extern unsigned char g_87c5b1;
extern unsigned int g_87c1e0;
extern unsigned int g_87c1e4;
extern unsigned int g_87c1e8;
extern unsigned int g_87c1f0;
extern unsigned int g_87c204;
extern unsigned int g_87c208;
extern unsigned int g_87c20c;
extern unsigned int g_87c210;
extern unsigned int g_87c220;
extern unsigned int g_87c218;
extern unsigned int g_87c264;
extern unsigned int g_859d2c;
extern unsigned int g_87c5a0;
extern unsigned int g_7b6fc4[];
extern unsigned int g_85a250;
extern char g_7a167c[];
extern char g_7a2b80[];
extern void __cdecl FUN_00735230(void);
extern void __cdecl FUN_0070b130(void);
extern void __cdecl FUN_0070a090(void);
extern void __cdecl FUN_00717650(void);
extern void __cdecl FUN_00713cc0(void);
extern void __cdecl FUN_007103b0(void);
extern void __cdecl FUN_0073d430(void);
extern void __cdecl FUN_0073d3b0(void);
extern void __cdecl FUN_0070b240(void);
extern void __cdecl FUN_00735810(void);
extern void __cdecl FUN_0074a150(void);
extern void __cdecl FUN_006faa30(void);
extern void __cdecl FUN_0074a4a0(void);
extern void __cdecl FUN_0074a4e0(void);
extern void __cdecl FUN_00709560(void);
extern void __cdecl FUN_007353f0(void);
extern void __cdecl FUN_007429e0(void);
extern void __cdecl FUN_00735440(void);
extern void __cdecl FUN_00740db0(void);

__declspec(naked) void func_0070A170(void)
{
    __asm {
        sub esp, 0x17c
        push ebx
        push ebp
        push esi
        push edi
        xor eax, eax
        mov ecx, 0x1f
        lea edi, [esp+0x18]
        rep stosd
        mov eax, dword ptr [g_858940]
        mov ecx, dword ptr [g_858944]
        xor ebx, ebx
        push ebx
        push offset g_85a218
        lea edx, [esp+0x20]
        mov dword ptr [esp+0x2c], eax
        mov eax, dword ptr [g_85a22c]
        push edx
        mov ebp, 0x7c
        push eax
        mov dword ptr [esp+0x28], ebp
        mov dword ptr [esp+0x2c], 7
        mov dword ptr [esp+0x90], 0x2840
        mov dword ptr [esp+0x30], ecx
        call FUN_00735230
        mov edx, dword ptr [g_85a22c]
        push ebx
        push offset g_85a21c
        lea ecx, [esp+0x20]
        push ecx
        push edx
        call FUN_00735230
        call FUN_0070b130
        mov eax, dword ptr [g_85a214]
        mov ecx, dword ptr [g_85a21c]
        push eax
        push ecx
        call FUN_0070a090
        push ebx
        push ebx
        push 0x3f800000
        push 0x3f800000
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        call FUN_00717650
        push ebx
        push 1
        call FUN_00713cc0
        push 1
        push 0xd
        call FUN_00713cc0
        mov eax, dword ptr [g_858940]
        cdq
        push 0x202060
        sub eax, edx
        push 0x80
        mov esi, eax
        push 0x200
        sar esi, 1
        push 0x80
        sub esi, 0x100
        push esi
        call FUN_007103b0
        call FUN_0073d430
        push 1
        push 0xd
        call FUN_00713cc0
        push offset g_7a167c
        add esi, 0x88
        push 0xffffff
        mov dword ptr [g_8aaf30], esi
        mov dword ptr [g_8aaf2c], 0xbc
        call FUN_0073d3b0
        call FUN_0070b130
        call FUN_0070b240
        mov esi, dword ptr [esp+0x190]
        cmp esi, ebx
        jne loc_70a2f7
        mov edx, dword ptr [g_858940]
        xor eax, eax
        mov ecx, 0x1f
        lea edi, [esp+0x18]
        rep stosd
        mov eax, dword ptr [g_858944]
        mov dword ptr [esp+0x18], ebp
        mov dword ptr [esp+0x1c], 0x1007
        mov dword ptr [esp+0x80], 0x20800
        mov dword ptr [esp+0x24], edx
        mov dword ptr [esp+0x20], eax
        mov dword ptr [esp+0x60], 0x20
        mov dword ptr [esp+0x64], 0x400
        mov dword ptr [esp+0x6c], 0x10
        mov dword ptr [esp+0x74], 0xffff
        mov dword ptr [g_85a204], ebx
        jmp loc_70a367
loc_70a2f7:
        cmp esi, 1
        jne loc_70a367
        mov edx, dword ptr [g_858944]
        xor eax, eax
        mov ecx, 0x1f
        lea edi, [esp+0x18]
        rep stosd
        mov ecx, dword ptr [g_858940]
        mov eax, 0x20
        mov dword ptr [esp+0x18], ebp
        mov dword ptr [esp+0x1c], 0x1007
        mov dword ptr [esp+0x80], 0x20800
        mov dword ptr [esp+0x24], ecx
        mov dword ptr [esp+0x20], edx
        mov dword ptr [esp+0x60], eax
        mov dword ptr [esp+0x64], 0x4400
        mov dword ptr [esp+0x6c], eax
        mov dword ptr [esp+0x74], 0xffffff00
        mov dword ptr [esp+0x70], 8
        mov dword ptr [esp+0x78], 0xff
        mov dword ptr [g_85a204], esi
loc_70a367:
        mov ecx, dword ptr [g_85a22c]
        push ebx
        push offset g_85a238
        lea eax, [esp+0x20]
        push eax
        push ecx
        call FUN_00735230
        mov edx, dword ptr [g_85a238]
        mov eax, dword ptr [g_85a218]
        push edx
        push eax
        call FUN_00735810
        mov ecx, dword ptr [g_85a218]
        mov edx, dword ptr [g_85a244]
        push offset g_85a24c
        push ecx
        push offset g_7a2b80
        push edx
        call FUN_0074a150
        mov eax, dword ptr [g_85a24c]
        push ebx
        push 1
        mov dword ptr [g_85a248], eax
        call FUN_006faa30
        mov eax, dword ptr [g_85a248]
        mov ecx, dword ptr [g_858940]
        mov edx, dword ptr [g_858944]
        push offset g_859d90
        push eax
        mov dword ptr [g_859d90], ebx
        mov dword ptr [g_859d94], ebx
        mov dword ptr [g_859d98], ecx
        mov dword ptr [g_859d9c], edx
        mov dword ptr [g_859da0], 0
        mov dword ptr [g_859da4], 0x3f800000
        call FUN_0074a4a0
        mov ecx, dword ptr [g_85a254]
        mov edx, dword ptr [g_858950]
        mov dword ptr [esp+0x10], ecx
        xor eax, eax
        mov ecx, 0x21
        mov edi, offset g_87c1d0
        rep stosd
        mov dword ptr [esp+0x14], edx
        mov edx, 1
        cmp esi, edx
        mov ecx, 8
        mov edi, offset g_859d30
        mov byte ptr [g_85a1df], 1
        mov dword ptr [g_858950], ebx
        mov dword ptr [g_85a254], ebx
        mov byte ptr [g_87c5b1], 1
        mov dword ptr [g_87c1e0], edx
        mov dword ptr [g_87c1e4], edx
        mov dword ptr [g_87c1e8], edx
        mov dword ptr [g_87c1f0], edx
        mov dword ptr [g_87c204], edx
        mov dword ptr [g_87c208], edx
        mov dword ptr [g_87c20c], 2
        mov dword ptr [g_87c210], 3
        mov dword ptr [g_87c220], edx
        mov dword ptr [g_87c218], ebx
        mov dword ptr [g_87c264], ebx
        mov dword ptr [g_859d2c], ebx
        rep stosd
        jne loc_70a4ba
        mov eax, dword ptr [g_85a248]
        push ebx
        push ebx
        push ebx
        push 4
        push ebx
        push ebx
        push eax
        call FUN_0074a4e0
loc_70a4ba:
        push ebx
        mov dword ptr [g_87c5a0], ebx
        call FUN_00709560
        call FUN_0070b130
        cmp esi, 1
        jne loc_70a60a
        mov edx, dword ptr [g_85a238]
        push ebx
        push 0x811
        lea ecx, [esp+0x118]
        push ecx
        push ebx
        push edx
        mov dword ptr [esp+0x124], ebp
        call FUN_007353f0
        mov ecx, dword ptr [g_85a218]
        push ebx
        push 0x821
        lea eax, [esp+0x9c]
        push eax
        push ebx
        push ecx
        mov dword ptr [esp+0xa8], ebp
        call FUN_007353f0
        mov eax, dword ptr [esp+0x9c]
        xor edi, edi
        cmp eax, ebx
        mov dword ptr [g_859d2c], ebx
        jbe loc_70a5f1
        mov eax, dword ptr [esp+0xa0]
loc_70a536:
        xor esi, esi
        cmp eax, ebx
        jbe loc_70a5e1
loc_70a540:
        mov edx, dword ptr [esp+0x120]
        mov eax, dword ptr [esp+0x134]
        imul edx, edi
        sar edx, 2
        add edx, esi
        mov eax, dword ptr [eax+edx*4]
        and eax, 0xff
        cmp eax, 7
        jbe loc_70a568
        mov eax, 7
loc_70a568:
        mov ebp, dword ptr [g_859d2c]
        mov edx, dword ptr [eax*4 + g_859d30]
        mov ecx, dword ptr [esp+0xe8]
        inc ebp
        inc edx
        cmp ecx, 0x20
        mov dword ptr [eax*4 + g_859d30], edx
        mov eax, dword ptr [eax*4 + g_7b6fc4]
        mov dword ptr [g_859d2c], ebp
        jne loc_70a5b2
        mov ecx, dword ptr [esp+0xa4]
        mov edx, dword ptr [esp+0xb8]
        imul ecx, edi
        sar ecx, 2
        add ecx, esi
        mov dword ptr [edx+ecx*4], eax
        jmp loc_70a5d1
loc_70a5b2:
        push eax
        call FUN_007429e0
        mov ecx, dword ptr [esp+0xa4]
        mov edx, dword ptr [esp+0xb8]
        imul ecx, edi
        sar ecx, 1
        add ecx, esi
        mov word ptr [edx+ecx*2], ax
loc_70a5d1:
        mov eax, dword ptr [esp+0xa0]
        inc esi
        cmp esi, eax
        jb loc_70a540
loc_70a5e1:
        mov ecx, dword ptr [esp+0x9c]
        inc edi
        cmp edi, ecx
        jb loc_70a536
loc_70a5f1:
        mov eax, dword ptr [g_85a218]
        push ebx
        push eax
        call FUN_00735440
        mov ecx, dword ptr [g_85a238]
        push ebx
        push ecx
        call FUN_00735440
loc_70a60a:
        mov edx, dword ptr [g_85a24c]
        push edx
        call FUN_00740db0
        mov eax, dword ptr [g_85a238]
        push eax
        mov dword ptr [g_85a24c], ebx
        call FUN_00740db0
        mov ecx, dword ptr [esp+0x10]
        mov edx, dword ptr [esp+0x14]
        mov eax, dword ptr [g_85a250]
        mov dword ptr [g_85a254], ecx
        mov ecx, dword ptr [g_85a218]
        mov dword ptr [g_858950], edx
        mov edx, dword ptr [g_85a214]
        push ecx
        push edx
        mov dword ptr [g_85a238], ebx
        mov dword ptr [g_85a204], ebx
        mov byte ptr [g_85a1df], bl
        mov dword ptr [g_85a248], eax
        call FUN_0070a090
        push ebx
        push ebx
        push 0x3f800000
        push 0x3f800000
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        push ebx
        call FUN_00717650
        pop edi
        pop esi
        pop ebp
        mov byte ptr [g_87c5b1], 1
        pop ebx
        add esp, 0x17c
        ret 4
    }
}
