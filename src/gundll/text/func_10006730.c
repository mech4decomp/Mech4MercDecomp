/*
 * FUN_10006730 (415 B) - __stdcall, RET 0xc.
 * SEH-guarded: allocates a node (FUN_10001d50), initializes it via
 * FUN_100069f0/FUN_100062a0, builds a list via FUN_10006ad0, frees nodes
 * (FUN_1000c4c0/FUN_10001d60), and inserts a fresh node (FUN_1000c410).
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern int  g_10055050;                       /* DAT_10055050 */
extern void __cdecl FUN_10001d50(void);       /* rel32 call, 1 arg */
extern void __cdecl FUN_100069f0(void);       /* rel32 call, thiscall */
extern void __cdecl FUN_100062a0(void);       /* rel32 call, 3 args */
extern void __cdecl FUN_10006ad0(void);       /* rel32 call, 3 args */
extern void __cdecl FUN_10001d60(void);       /* rel32 call, 1 arg */
extern void __cdecl FUN_10006240(void);       /* rel32 call, fastcall */
extern void __cdecl FUN_1000c4c0(void);       /* rel32 call, 2 args */
extern void __cdecl FUN_1000c410(void);       /* rel32 call, 1 arg */

__declspec(naked) void __stdcall FUN_10006730(void)
{
    __asm {
        push    -0x1
        push    0x100470db
        mov     eax, dword ptr fs:[0]
        push    eax
        mov     dword ptr fs:[0], esp
        sub     esp, 0x8
        push    ebx
        push    esi
        push    edi
        push    0x3c
        call    FUN_10001d50
        mov     esi, eax
        add     esp, 0x4
        mov     dword ptr [esp + 0xc], esi
        mov     ebx, dword ptr [esp + 0x24]
        xor     edi, edi
        cmp     esi, edi
        mov     dword ptr [esp + 0x1c], edi
        jz      L_679a
        push    0x8
        push    edi
        push    0x10004af0
        push    0x1001b030
        mov     ecx, esi
        call    FUN_100069f0
        push    esi
        push    0x10006570
        push    ebx
        mov     byte ptr [esp + 0x28], 0x1
        call    FUN_100062a0
        mov     eax, dword ptr [ebx + 0x34]
        mov     dword ptr [esi + 0x34], eax
        mov     dword ptr [esp + 0x24], esi
        jmp     L_679e
    L_679a:
        mov     dword ptr [esp + 0x24], edi
    L_679e:
        mov     ebx, dword ptr [ebx + 0x34]
        push    ebp
        push    ebx
        mov     ebx, dword ptr [esp + 0x34]
        push    ebx
        mov     dword ptr [esp + 0x28], 0xffffffff
        call    FUN_10006ad0
        mov     ebp, eax
        cmp     ebp, edi
        jz      L_686f
        mov     dword ptr [esp + 0x14], ebp
        xor     eax, eax
        cmp     word ptr [ebp], di
        mov     dword ptr [esp + 0x20], 0x2
        mov     dword ptr [esp + 0x10], eax
        jbe     L_6854
    L_67d7:
        mov     edx, dword ptr [ebp + 0x4]
        xor     ebx, ebx
        mov     bx, ax
        shl     ebx, 0x4
        mov     esi, dword ptr [ebx + edx]
        add     ebx, edx
        cmp     esi, ebx
        jz      L_6843
        nop
        /* __emit: 4-byte NOP (LEA ESP,[ESP+0]); MSVC6 emits 3-byte 8D 24 24 */
        __emit 0x8D
        __emit 0x64
        __emit 0x24
        __emit 0x00
    L_67f0:
        mov     ecx, 0x10006140
        test    ecx, ecx
        jz      L_6810
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L_6810
        push    eax
        call    FUN_10001d60
        add     esp, 0x4
        mov     dword ptr [esi + 0x8], 0x0
    L_6810:
        mov     edx, dword ptr [esi + 0x4]
        mov     edi, dword ptr [esi]
        mov     dword ptr [edx], edi
        mov     eax, dword ptr [esi]
        mov     ecx, dword ptr [esi + 0x4]
        mov     dword ptr [eax + 0x4], ecx
        mov     dword ptr [esi + 0x4], 0x0
        mov     dword ptr [esi], 0x0
        mov     edx, dword ptr [g_10055050]
        push    esi
        push    edx
        call    FUN_1000c4c0
        cmp     edi, ebx
        mov     esi, edi
        jnz     L_67f0
        mov     eax, dword ptr [esp + 0x10]
    L_6843:
        inc     eax
        cmp     ax, word ptr [ebp]
        mov     dword ptr [esp + 0x10], eax
        jc      L_67d7
        mov     ebx, dword ptr [esp + 0x30]
        xor     edi, edi
    L_6854:
        mov     ecx, ebp
        mov     dword ptr [ebp + 0x24], edi
        mov     dword ptr [esp + 0x20], 0xffffffff
        call    FUN_10006240
        push    ebp
        call    FUN_10001d60
        add     esp, 0x4
    L_686f:
        mov     eax, dword ptr [esp + 0x28]
        mov     eax, dword ptr [eax + 0x34]
        push    eax
        call    dword ptr [ebx + 0xc]
        and     ax, word ptr [ebx + 0x2]
        mov     ecx, dword ptr [g_10055050]
        mov     ebp, dword ptr [ebx + 0x4]
        xor     edi, edi
        mov     di, ax
        push    ecx
        mov     esi, edi
        shl     esi, 0x4
        add     esi, ebp
        call    FUN_1000c410
        test    eax, eax
        pop     ebp
        jz      L_68b9
        mov     edx, dword ptr [esp + 0x24]
        mov     dword ptr [eax + 0x8], edx
        mov     dword ptr [eax + 0xc], edi
        mov     dword ptr [eax + 0x4], esi
        mov     ecx, dword ptr [esi]
        mov     dword ptr [eax], ecx
        mov     dword ptr [esi], eax
        mov     edx, dword ptr [eax]
        mov     dword ptr [edx + 0x4], eax
        inc     dword ptr [ebx + 0x24]
    L_68b9:
        mov     ecx, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        mov     al, 0x1
        pop     ebx
        mov     dword ptr fs:[0], ecx
        add     esp, 0x14
        ret     0xc
    }
}
