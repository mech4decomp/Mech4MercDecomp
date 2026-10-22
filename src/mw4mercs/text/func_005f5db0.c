/*
 * FUN_005f5db0 (53 B) — Checks a flag and conditionally allocates.
 *
 * Uses absolute memory refs DAT_007dab44 / DAT_007dab40.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int DAT_007dab44;
extern unsigned int DAT_007dab40;
extern void *__stdcall FUN_00629290(int param);

__declspec(naked) void FUN_005f5db0(void)
{
    __asm {
        mov     eax, DAT_007dab44
        mov     ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x40]
        xor     ecx, 0x85739531
        jz      done
        mov     ecx, dword ptr [eax + 0x40]
        push    0xe
        xor     ecx, 0x85739531
        call    FUN_00629290
        mov     dword ptr [eax + 0x80], 0xffffffff
done:
        ret
    }
}
