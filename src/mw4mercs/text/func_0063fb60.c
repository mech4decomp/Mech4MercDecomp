/*
 * FUN_0063fb60 (84 B) — __thiscall HUD toggle helper. Calls into the
 * HUD element list (this+0x54); if a condition holds, flips the
 * this+0x50 flag (setz) and mirrors it to this+0x135 and global
 * 0x007ddd79; otherwise clears this+0x50 and mirrors 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007f1f84;
extern unsigned char g_007ddd79;

extern void FUN_0041fd80(void);
extern void FUN_00415230(void);

__declspec(naked) void FUN_0063fb60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        push    edi
        lea     edi, [esi+0x54]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      loc_fba5
        mov     ecx, edi
        call    FUN_0041fd80
        mov     ecx, dword ptr [g_007f1f84]
        push    ecx
        mov     ecx, dword ptr [eax+0x4]
        call    FUN_00415230
        test    al, al
        jz      loc_fba5
        mov     al, byte ptr [esi+0x50]
        test    al, al
        setz    al
        pop     edi
        mov     byte ptr [esi+0x50], al
        mov     byte ptr [esi+0x135], al
        mov     byte ptr [g_007ddd79], al
        pop     esi
        ret
loc_fba5:
        mov     byte ptr [esi+0x50], 0x0
        mov     al, byte ptr [esi+0x50]
        pop     edi
        mov     byte ptr [g_007ddd79], al
        pop     esi
        ret
    }
}
