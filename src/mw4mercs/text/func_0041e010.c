/*
 * FUN_0041e010 (68 B) — __thiscall (ECX=this). Teardown helper: frees
 * [this+0x28] via FUN_006fc580 (or [this+0x10] via FUN_006f4230 if null),
 * then calls IAT 0x0076b2d0 on [this+0x24] and zeroes it. Clears [this+0x2c].
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b2d0;

extern void __cdecl FUN_006fc580(void);
extern void __cdecl FUN_006f4230(void);

__declspec(naked) void FUN_0041e010(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x28]
        test    eax, eax
        jz      loc_41e029
        push    eax
        call    FUN_006fc580
        mov     dword ptr [esi + 0x28], 0x0
        jmp     loc_41e036
loc_41e029:
        mov     eax, dword ptr [esi + 0x10]
        test    eax, eax
        jz      loc_41e036
        push    eax
        call    FUN_006f4230
loc_41e036:
        mov     eax, dword ptr [esi + 0x24]
        test    eax, eax
        mov     byte ptr [esi + 0x2c], 0x0
        jz      loc_41e052
        push    eax
        call    dword ptr [g_0076b2d0]
        add     esp, 0x4
        mov     dword ptr [esi + 0x24], 0x0
loc_41e052:
        pop     esi
        ret
    }
}
