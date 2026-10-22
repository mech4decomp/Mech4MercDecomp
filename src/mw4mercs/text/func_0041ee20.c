/*
 * FUN_0041ee20 (58 B) — __thiscall serialization read helper.
 * Reads a typed value via FUN_004211e0, then passes the result through
 * FUN_0041ec50 (bit-buffer post-processing).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004211e0(void);
extern void __cdecl FUN_0041ec50(void);

__declspec(naked) void FUN_0041ee20(void)
{
    __asm {
        mov     eax, dword ptr [esp+0xc]
        mov     edx, dword ptr [esp+0x4]
        push    esi
        push    edi
        mov     edi, dword ptr [esp+0x18]
        push    edi
        push    eax
        mov     eax, dword ptr [edx]
        mov     esi, ecx
        mov     ecx, dword ptr [esp+0x18]
        push    ecx
        push    eax
        call    FUN_004211e0
        add     esp, 0x10
        push    edi
        lea     ecx, [esp+0x1c]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp+0x20], eax
        call    FUN_0041ec50
        pop     edi
        mov     eax, esi
        pop     esi
        ret     0x10
    }
}
