/*
 * FUN_0067DDD0 (22 B) — HUD map object init (__fastcall, ECX=this), tail-jumps
 * to FUN_0067c0f0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0067c0f0(void);

__declspec(naked) void __fastcall FUN_0067ddd0(void)
{
    __asm {
        xor     eax, eax
        mov     dword ptr [ecx + 4], eax
        mov     byte ptr [ecx + 0x10], al
        mov     dword ptr [ecx + 8], eax
        mov     dword ptr [ecx + 0xc], eax
        add     ecx, 0x18
        jmp     FUN_0067c0f0
    }
}
