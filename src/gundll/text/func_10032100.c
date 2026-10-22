/*
 * FUN_10032100 (100 B) — __fastcall, RET.
 * CoCreateInstance wrapper: creates a COM object (IID 0x1004ae4c, CLSID
 * 0x1004ae1c, CLSCTX 0x17) into this+0xc, then calls a virtual method
 * (vtable+0xc) with (this, 0x10032f20). On failure, logs via FUN_10033890
 * and releases the object (vtable+0x8). Returns the HRESULT.
 *
 * CFLAGS: /O1
 */

extern void *g_10049234;   /* IAT: CoCreateInstance */
extern void __cdecl FUN_10033890(void);

__declspec(naked) void __fastcall FUN_10032100(void)
{
    __asm {
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        lea     edi, [ebx + 0xc]
        push    edi
        push    0x1004ae1c
        push    0x17
        push    0x0
        push    0x1004ae4c
        call    dword ptr [g_10049234]
        mov     esi, eax
        test    esi, esi
        push    0x0
        jge     L_138
        push    0x0
        push    0xc0000008
        push    0x1005153c
        call    FUN_10033890
        jmp     L_148
    L_138:
        mov     eax, dword ptr [edi]
        mov     ecx, dword ptr [eax]
        push    0x10032f20
        push    ebx
        push    eax
        call    dword ptr [ecx + 0xc]
        mov     esi, eax
    L_148:
        test    esi, esi
        jge     L_15e
        mov     eax, dword ptr [edi]
        test    eax, eax
        jz      L_15e
        mov     edx, dword ptr [eax]
        push    eax
        call    dword ptr [edx + 0x8]
        mov     dword ptr [edi], 0x0
    L_15e:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebx
        ret
    }
}
