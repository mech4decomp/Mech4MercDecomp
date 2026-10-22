/*
 * FUN_004F4230 (46 B) — __thiscall (RET 0x4). Calls FUN_004DABF0(edi),
 * then walks a linked list at [this+0xbc], invoking virtual method
 * (slot 0x34/4) on each node with edi.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004dabf0(void);

__declspec(naked) void FUN_004F4230(void)
{
    __asm {
        push    esi
        push    edi
        mov     edi, dword ptr [esp + 0xc]
        mov     esi, ecx
        push    edi
        call    FUN_004dabf0
        mov     esi, dword ptr [esi + 0xbc]
L_4f4244:
        test    esi, esi
        je      L_4f4259
        mov     ecx, dword ptr [esi]
        test    ecx, ecx
        mov     esi, dword ptr [esi + 4]
        je      L_4f4259
        mov     eax, dword ptr [ecx]
        push    edi
        call    dword ptr [eax + 0x34]
        jmp     L_4f4244
L_4f4259:
        pop     edi
        pop     esi
        ret     4
    }
}
