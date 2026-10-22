/*
 * FUN_004fb1e0 (88 B) — Adept::Mover velocity update (__thiscall,
 * RET 0x10, 4 params). Calls base FUN_004daf00, asserts via FUN_006fab90
 * ("Not implemented"), then adds +0x198/+0x19c/+0x1a0 into the param_2
 * vector.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004daf00(void);
extern void __cdecl FUN_006fab90(void);

extern char g_0076d414[];  /* "Not implemented" @ 0x76d414 */

__declspec(naked) void FUN_004fb1e0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x14]
        mov     edx, dword ptr [ebp + 0x8]
        push    esi
        mov     esi, dword ptr [ebp + 0xc]
        push    edi
        mov     edi, ecx
        mov     ecx, dword ptr [ebp + 0x10]
        push    eax
        push    ecx
        push    esi
        push    edx
        mov     ecx, edi
        call    FUN_004daf00
        push    offset g_0076d414
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      LFB210
        int     3
LFB210:
        fld     dword ptr [edi + 0x198]
        fadd    dword ptr [esi]
        fstp    dword ptr [esi]
        fld     dword ptr [edi + 0x19c]
        fadd    dword ptr [esi + 0x4]
        fstp    dword ptr [esi + 0x4]
        fld     dword ptr [edi + 0x1a0]
        pop     edi
        fadd    dword ptr [esi + 0x8]
        fstp    dword ptr [esi + 0x8]
        pop     esi
        pop     ebp
        ret     0x10
    }
}
