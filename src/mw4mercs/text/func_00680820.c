/*
 * FUN_00680820 (60 B) — __thiscall (RET 0x4).
 *
 * Allocates a 0xa4-byte object via FUN_004084d0(); if non-null, constructs
 * it via FUN_0067fa60(param) (stdcall, cleans its arg). Then calls
 * FUN_00416a90(&param, result) on [this+0x10]. Returns the constructed
 * object (or 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *__cdecl FUN_004084d0(unsigned int size);
extern void *__stdcall FUN_0067fa60(void *ptr);
extern void __cdecl FUN_00416a90(void);

__declspec(naked) void *FUN_00680820(void)
{
    __asm {
        push    esi
        push    edi
        push    0xa4
        mov     edi, ecx
        call    FUN_004084d0
        add     esp, 0x4
        test    eax, eax
        jz      L_null
        mov     ecx, dword ptr [esp + 0xc]
        push    ecx
        mov     ecx, eax
        call    FUN_0067fa60
        mov     esi, eax
        jmp     L_join
    L_null:
        xor     esi, esi
    L_join:
        lea     edx, [esp + 0xc]
        push    edx
        push    esi
        lea     ecx, [edi + 0x10]
        call    FUN_00416a90
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x4
    }
}
