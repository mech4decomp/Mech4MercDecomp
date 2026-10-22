/*
 * FUN_004a1840 (181 B) — MLR particle/shrapnel: constructor. Sets vtable
 * 0x77029c, calls FUN_004a32c0, then branches on param_2 < 0x19: the small
 * path refcounts an object via FUN_00421e60/FUN_00487900 and reads a stream
 * field; the large path uses FUN_00412a00 and a global object at 0x7da884.
 * __thiscall (this in ECX), RET 0x8.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004a32c0(void);
extern void __cdecl FUN_00421e60(void);
extern void __cdecl FUN_00487900(void);
extern void __cdecl FUN_00412a00(void);
extern void *g_7da884;

__declspec(naked) void FUN_004a1840(void)
{
    __asm {
        push    ebx
        mov     ebx, dword ptr [esp+0x8]
        push    ebp
        mov     ebp, dword ptr [esp+0x10]
        push    esi
        push    edi
        push    ebp
        push    ebx
        mov     esi, ecx
        push    0x52b
        call    FUN_004a32c0
        cmp     ebp, 0x19
        lea     edi, [esi+0x128]
        mov     dword ptr [edi], 0x0
        mov     dword ptr [esi], 0x77029c
        jge     L18bb
        push    ebx
        call    FUN_00421e60
        push    eax
        push    ebx
        call    FUN_00487900
        add     esp, 0xc
        dec     word ptr [eax+0x10]
        cmp     word ptr [eax+0x10], 0x0
        jnz     L1898
        test    eax, eax
        jz      L1898
        mov     edx, dword ptr [eax]
        push    0x1
        mov     ecx, eax
        call    dword ptr [edx]
L1898:
        mov     eax, dword ptr [ebx]
        push    0x4
        lea     ecx, [esi+0x124]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax+0x20]
L18a8:
        pop     edi
        mov     dword ptr [esi+0x120], 0x0
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
L18bb:
        push    edi
        push    ebx
        call    FUN_00412a00
        mov     edx, dword ptr [eax]
        add     esp, 0x8
        push    0x4
        lea     ecx, [esi+0x124]
        push    ecx
        mov     ecx, eax
        call    dword ptr [edx+0x20]
        cmp     dword ptr [edi], 0x0
        jz      L18a8
        mov     ecx, dword ptr [g_7da884]
        mov     edx, dword ptr [ecx]
        push    edi
        call    dword ptr [edx+0x4]
        pop     edi
        mov     dword ptr [esi+0x120], eax
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }
}
