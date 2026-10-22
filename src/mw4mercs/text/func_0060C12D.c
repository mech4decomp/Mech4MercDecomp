/* FUN_0060C12D - 0x0060C12D, size 3451 B (block 0x60C12D, first fn)
 * __stdcall, RET 0xC. Large gameplay load/validate routine: reads an object
 * list, validates entries, builds C++ strings, MD5 hashes data via
 * FUN_0070e390/70e3c0/70e460, and issues many vtable + helper calls.
 *
 * NOTE: this data block also contains a second function at 0x0060C7D0
 * (RET 4) with its own jump tables at 0x60CE84/0x60CE94; that one is a
 * separate unit (not transcribed here).
 */
#include <windows.h>

/* extern data symbols (absolute addresses) */
extern int    g_7dab44;   /* 0x007dab44 */
extern int    g_7dab40;   /* 0x007dab40 */
extern char   g_76cb8c[]; /* 0x0076cb8c */
extern char   g_779f4c[]; /* 0x00779f4c */
extern char   g_76c724[]; /* 0x0076c724 */
extern char   g_76b768[]; /* 0x0076b768 */
extern char   g_78c0a4[]; /* 0x0078c0a4 */
extern char   g_78c098[]; /* 0x0078c098 */
extern int    g_7db0b8;   /* 0x007db0b8 */
extern int    g_7db090;   /* 0x007db090 */
extern char   g_779e88[]; /* 0x00779e88 (vtable ptr) */
extern void*  g_76b2b0;   /* 0x0076b2b0 (IAT fn ptr) */
extern int    g_7f27e0;   /* 0x007f27e0 */
extern int    g_7dd268;   /* 0x007dd268 */
extern char   g_7b5514;   /* 0x007b5514 */
extern int    g_7f2260;   /* 0x007f2260 */
extern int    g_7f2264;   /* 0x007f2264 */
extern int    g_7f26a4;   /* 0x007f26a4 */
extern int    g_7da848;   /* 0x007da848 */
extern float  g_7704c0;   /* 0x007704c0 */
extern float  g_78bf68;   /* 0x0078bf68 */
extern char   g_7b9460[]; /* 0x007b9460 */

/* extern function symbols (rel32 calls) */
extern void __cdecl FUN_00547490(void);
extern void __cdecl FUN_004d1f80(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_004125e0(void);
extern void __cdecl FUN_00412740(void);
extern void __cdecl FUN_0040d9b0(void);
extern void __cdecl FUN_006fc4d0(void);
extern void __cdecl FUN_006fb780(void);
extern void __cdecl FUN_004d21c0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004d2a90(void);
extern void __cdecl FUN_0041fcb0(void);
extern void __cdecl FUN_00547560(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_004d2d00(void);
extern void __cdecl FUN_0041fcd0(void);
extern void __cdecl FUN_004cec10(void);
extern void __cdecl FUN_004d9910(void);
extern void __cdecl FUN_004d2110(void);
extern void __cdecl FUN_0041ee70(void);
extern void __cdecl FUN_00412a50(void);
extern void __cdecl FUN_004d2680(void);
extern void __cdecl FUN_00412b30(void);
extern void __cdecl FUN_00412ca0(void);
extern void __cdecl FUN_0070e390(void);
extern void __cdecl FUN_0070e3c0(void);
extern void __cdecl FUN_0070e460(void);
extern void __cdecl FUN_0041f030(void);
extern void __cdecl FUN_0060fcf0(void);
extern void __cdecl FUN_0041ef60(void);
extern void __cdecl FUN_00412b60(void);
extern void __cdecl FUN_0041a070(void);

__declspec(naked) void func_0060C12D(void)
{
    __asm {
        nop
        nop
        nop
        sub esp, 0x298
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr [esp + 0x2ac]
        mov eax, dword ptr [edi + 4]
        mov ebp, dword ptr [eax]
        mov edx, dword ptr [edi + 0x10]
        mov eax, dword ptr [edx]
        mov esi, ecx
        mov ecx, dword ptr [edi + 0xc]
        mov ebx, dword ptr [ecx]
        push 1
        push ebx
        mov dword ptr [esp + 0x2c], ebp
        mov dword ptr [esp + 0x3c], ebx
        mov dword ptr [esp + 0x28], eax
        call FUN_00547490
        add esp, 8
        test al, al
        jne L_c17d
        pop edi
        pop esi
        pop ebp
        or eax, 0xffffffff
        pop ebx
        add esp, 0x298
        ret 0xc
L_c17d:
        mov ecx, dword ptr [edi + 8]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [esi + 0x10]
        mov cx, word ptr [eax + edx*4]
        lea eax, [eax + edx*4]
        mov word ptr [esp + 0x30], cx
        mov dx, word ptr [eax + 2]
        push 1
        lea eax, [esp + 0x34]
        push eax
        lea ecx, [esp + 0x148]
        mov word ptr [esp + 0x3a], dx
        call FUN_004d1f80
        mov ecx, dword ptr [esp + 0x2b4]
        push ecx
        lea ecx, [esp + 0x14]
        call FUN_00412570
        mov edx, dword ptr [esp + 0x10]
        push ebp
        push edx
        lea ecx, [esp + 0x1c]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x14]
        call FUN_0040d9b0
        mov eax, dword ptr [esp + 0x10]
        push 0x76cb8c
        push eax
        lea ecx, [esp + 0x1c]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x14]
        call FUN_0040d9b0
        mov ecx, dword ptr [esp + 0x10]
        push ebx
        push ecx
        lea ecx, [esp + 0x1c]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x14]
        call FUN_00412740
        lea ecx, [esp + 0x14]
        call FUN_0040d9b0
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        mov dword ptr [esp + 0x18], eax
        je L_c237
        inc byte ptr [eax - 1]
L_c237:
        lea edx, [esp + 0x18]
        lea ebp, [esi + 8]
        push edx
        mov ecx, ebp
        call FUN_00412740
        mov eax, dword ptr [esp + 0x18]
        push 0x779f4c
        push eax
        lea ecx, [esp + 0x1c]
        call FUN_004125e0
        push eax
        lea ecx, [esp + 0x1c]
        call FUN_00412740
        lea ecx, [esp + 0x14]
        call FUN_0040d9b0
        push 0x76c724
        call FUN_006fc4d0
        test al, al
        jne L_c284
        push 0x76c724
        call FUN_006fb780
L_c284:
        mov ecx, dword ptr [esp + 0x18]
        push ecx
        call FUN_006fc4d0
        test al, al
        je L_c2ca
        mov eax, dword ptr [esp + 0x20]
        test eax, eax
        jne L_c2ca
        lea ecx, [esp + 0x18]
        call FUN_0040d9b0
        lea ecx, [esp + 0x10]
        call FUN_0040d9b0
        lea ecx, [esp + 0x140]
        call FUN_004d21c0
        pop edi
        pop esi
        pop ebp
        mov eax, 0xd4a
        pop ebx
        add esp, 0x298
        ret 0xc
L_c2ca:
        lea edi, [esi + 0x30]
        mov ecx, edi
        call FUN_0041fd80
        test eax, eax
        je L_c300
        mov ecx, edi
        call FUN_0041fd80
        mov ecx, eax
        call FUN_004d2a90
        mov ecx, edi
        call FUN_0041fd80
        test eax, eax
        je L_c2f9
        mov edx, dword ptr [eax]
        push 1
        mov ecx, eax
        call dword ptr [edx]
L_c2f9:
        mov ecx, edi
        call FUN_0041fcb0
L_c300:
        mov eax, dword ptr [esp + 0x18]
        push 1
        push eax
        call FUN_00547560
        add esp, 8
        test al, al
        jne L_c365
        mov eax, dword ptr [esp + 0x18]
        test eax, eax
        je L_c32e
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne L_c32e
        push eax
        call FUN_004084e0
        add esp, 4
L_c32e:
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        je L_c349
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne L_c349
        push eax
        call FUN_004084e0
        add esp, 4
L_c349:
        lea ecx, [esp + 0x140]
        call FUN_004d21c0
        pop edi
        pop esi
        pop ebp
        or eax, 0xffffffff
        pop ebx
        add esp, 0x298
        ret 0xc
L_c365:
        mov ecx, dword ptr [esp + 0x18]
        push 1
        push 1
        push 0
        push 0x3f
        push 6
        push 0
        push ecx
        mov ecx, dword ptr [g_7db0b8]
        call FUN_004d2d00
        push eax
        mov ecx, edi
        call FUN_0041fcd0
        mov ecx, dword ptr [g_7db090]
        call FUN_004cec10
        mov dl, byte ptr [eax]
        mov ecx, dword ptr [esi + 4]
        test ecx, ecx
        mov byte ptr [esp + 0x1c], dl
        mov ax, word ptr [eax + 2]
        mov word ptr [esp + 0x1e], ax
        je L_c3b7
        mov edx, dword ptr [ecx]
        push 1
        call dword ptr [edx]
        mov dword ptr [esi + 4], 0
L_c3b7:
        push 1
        lea eax, [esp + 0x20]
        push eax
        lea ecx, [esp + 0x148]
        push ecx
        call FUN_004d9910
        mov ebp, dword ptr [ebp]
        add esp, 0xc
        push 0
        mov ecx, edi
        mov ebx, eax
        call FUN_0041fd80
        push eax
        push ebp
        lea ecx, [esp + 0x22c]
        call FUN_004d2110
        push 0
        lea ecx, [esp + 0xe4]
        call FUN_0041ee70
        push 0x76b768
        lea ecx, [esp + 0x30]
        call FUN_00412570
        lea edx, [esp + 0x2c]
        push edx
        lea eax, [esp + 0xe4]
        push eax
        call FUN_00412a50
        add esp, 8
        push 0
        lea ecx, [esp + 0xe4]
        push ecx
        lea ecx, [esp + 0x228]
        call FUN_004d2680
        push 0
        mov ecx, edi
        call FUN_0041fd80
        push eax
        push 0x78c0a4
        lea ecx, [esp + 0x98]
        call FUN_004d2110
        push 0
        push 0
        lea ecx, [esp + 0x94]
        call FUN_004d2680
        push 0
        lea ecx, [esp + 0x68]
        call FUN_0041ee70
        mov ebp, dword ptr [ebx]
        mov ecx, edi
        call FUN_0041fd80
        push eax
        lea edx, [esp + 0x68]
        push edx
        mov ecx, ebx
        call dword ptr [ebp + 0xc]
        mov eax, dword ptr [esp + 0x64]
        push 0
        lea ecx, [esp + 0x68]
        call dword ptr [eax + 0xc]
        mov ebp, 0xffffffec
        lea ecx, [esp + 0x108]
        mov dword ptr [esp + 0x6c], ebp
        call FUN_00412b30
        push 0x76b768
        lea ecx, [esp + 0x10c]
        call FUN_00412ca0
        lea ecx, [esp + 0x108]
        push ecx
        lea edx, [esp + 0x68]
        push edx
        lea ecx, [esp + 0x94]
        call FUN_004d2680
        test ebx, ebx
        je L_c4d3
        mov eax, dword ptr [ebx]
        push 1
        mov ecx, ebx
        call dword ptr [eax]
L_c4d3:
        mov ecx, dword ptr [g_7db090]
        call FUN_004cec10
        mov cl, byte ptr [eax]
        mov byte ptr [esp + 0x1c], cl
        mov dx, word ptr [eax + 2]
        push 1
        lea eax, [esp + 0x20]
        push eax
        lea ecx, [esp + 0x94]
        push ecx
        mov word ptr [esp + 0x2a], dx
        call FUN_004d9910
        mov edx, dword ptr [esi]
        add esp, 0xc
        push eax
        mov ecx, esi
        call dword ptr [edx + 0x24]
        push 0
        mov ecx, edi
        call FUN_0041fd80
        push eax
        push 0x78c098
        lea ecx, [esp + 0x270]
        call FUN_004d2110
        push 0
        push 0
        lea ecx, [esp + 0x26c]
        call FUN_004d2680
        lea ecx, [esp + 0x264]
        call FUN_004d21c0
        push 1
        lea eax, [esp + 0x2c]
        push eax
        lea ecx, [esp + 0x1e4]
        mov word ptr [esp + 0x30], 6
        mov word ptr [esp + 0x32], 3
        call FUN_004d1f80
        lea ecx, [esp + 0x184]
        push ecx
        call FUN_0070e390
        mov edx, dword ptr [esp + 0x8c]
        push 0
        lea ecx, [esp + 0x90]
        mov dword ptr [esp + 0x3c], 0xa1252388
        call dword ptr [edx + 0xc]
        push 4
        lea eax, [esp + 0x3c]
        push eax
        lea ecx, [esp + 0x18c]
        push ecx
        mov dword ptr [esp + 0xa0], ebp
        call FUN_0070e3c0
        mov eax, dword ptr [esp + 0xa0]
        mov edx, dword ptr [esp + 0x9c]
        mov ecx, dword ptr [esp + 0xa8]
        sub edx, eax
        add edx, ecx
        push edx
        push eax
        lea eax, [esp + 0x18c]
        push eax
        call FUN_0070e3c0
        lea ecx, [esp + 0x184]
        push ecx
        lea edx, [esp + 0xd4]
        push edx
        call FUN_0070e460
        push 0
        lea ecx, [esp + 0x40]
        call FUN_0041ee70
        push 0x10
        lea eax, [esp + 0xd4]
        push eax
        lea ecx, [esp + 0x44]
        call FUN_0041f030
        mov edx, dword ptr [esp + 0x3c]
        push 0
        lea ecx, [esp + 0x40]
        call dword ptr [edx + 0xc]
        mov dword ptr [esp + 0x44], ebp
        lea eax, [esp + 0x108]
        push eax
        lea ecx, [esp + 0x40]
        push ecx
        lea ecx, [esp + 0x1e4]
        call FUN_004d2680
        mov ecx, edi
        call FUN_0041fd80
        mov ecx, eax
        call FUN_004d2a90
        mov edx, dword ptr [esi]
        mov ecx, esi
        call dword ptr [edx + 0x3c]
        mov edx, dword ptr [g_7dab40]
        mov dword ptr [esi + 0x38], eax
        mov eax, dword ptr [g_7dab44]
        mov ecx, dword ptr [eax]
        xor ecx, edx
        mov edi, dword ptr [ecx + 0xc]
        xor edi, 0x85739531
        lea ecx, [edi + 0xf4]
        call FUN_0060fcf0
        mov eax, dword ptr [esi + 0x40]
        test eax, eax
        jne L_c70f
        mov edx, dword ptr [esp + 0x24]
        push edx
        lea ecx, [esp + 0x28]
        mov dword ptr [edi + 0xc4], 0xffffffff
        call FUN_00412570
        mov eax, dword ptr [eax]
        push 0x76cb8c
        push eax
        lea ecx, [esp + 0x1c]
        call FUN_004125e0
        mov ecx, dword ptr [esp + 0x34]
        mov edx, dword ptr [esp + 0x14]
        push ecx
        push edx
        lea ecx, [esp + 0x28]
        call FUN_004125e0
        lea eax, [esp + 0x20]
        push eax
        lea ecx, [edi + 0xc8]
        call FUN_00412740
        mov eax, dword ptr [esp + 0x20]
        test eax, eax
        je L_c6d9
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne L_c6d9
        push eax
        call FUN_004084e0
        add esp, 4
L_c6d9:
        mov eax, dword ptr [esp + 0x14]
        test eax, eax
        je L_c6f4
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne L_c6f4
        push eax
        call FUN_004084e0
        add esp, 4
L_c6f4:
        mov eax, dword ptr [esp + 0x24]
        test eax, eax
        je L_c70f
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne L_c70f
        push eax
        call FUN_004084e0
        add esp, 4
L_c70f:
        lea ecx, [esp + 0x3c]
        call FUN_0041ef60
        lea ecx, [esp + 0x1dc]
        call FUN_004d21c0
        lea ecx, [esp + 0x108]
        call FUN_00412b60
        lea ecx, [esp + 0x64]
        call FUN_0041ef60
        lea ecx, [esp + 0x8c]
        call FUN_004d21c0
        mov eax, dword ptr [esp + 0x2c]
        test eax, eax
        je L_c760
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne L_c760
        push eax
        call FUN_004084e0
        add esp, 4
L_c760:
        lea ecx, [esp + 0xe0]
        call FUN_0041ef60
        lea ecx, [esp + 0x220]
        call FUN_004d21c0
        mov eax, dword ptr [esp + 0x18]
        test eax, eax
        je L_c793
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne L_c793
        push eax
        call FUN_004084e0
        add esp, 4
L_c793:
        mov eax, dword ptr [esp + 0x10]
        test eax, eax
        je L_c7ae
        mov cl, byte ptr [eax - 1]
        dec eax
        dec cl
        mov byte ptr [eax], cl
        jne L_c7ae
        push eax
        call FUN_004084e0
        add esp, 4
L_c7ae:
        lea ecx, [esp + 0x140]
        call FUN_004d21c0
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x298
        ret 0xc
    }
}
