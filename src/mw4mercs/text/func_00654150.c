/*
 * FUN_00654150 (155 B) — __fastcall constructor/init for an ABL object.
 * Zeroes fields at +0, +0x400004, +0x400008, +0x40000c; iterates a
 * 12-byte-element list calling FUN_00659620 (per-element init) and
 * FUN_00658ef0/FUN_006583b0 (teardown) over the tail.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void FUN_00659620(void);
extern void FUN_00658ef0(void);
extern void FUN_006583b0(void);

__declspec(naked) void FUN_00654150(void)
{
    __asm {
        sub     esp, 8
        xor     eax, eax
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     cl, byte ptr [esp+0xf]
        mov     dword ptr [esi], eax
        mov     dword ptr [esi+0x400004], eax
        mov     ebp, eax
        mov     byte ptr [esi+0x40000c], cl
        mov     dword ptr [esi+0x40000c], eax
        mov     ebx, dword ptr [esi+0x400004]
        mov     dword ptr [esi+0x400008], eax
        push    edi
        mov     edi, ebp
        mov     ecx, ebp
        sub     ecx, edi
        mov     eax, 0x2aaaaaab
        imul    ecx
        sar     edx, 1
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        test    edx, edx
        jle     L_b8
        mov     dword ptr [esp+0x14], edx
    L_9f:
        push    edi
        mov     ecx, ebx
        call    FUN_00659620
        mov     eax, dword ptr [esp+0x14]
        add     edi, 0xc
        add     ebx, 0xc
        dec     eax
        mov     dword ptr [esp+0x14], eax
        jnz     L_9f
    L_b8:
        cmp     ebx, ebp
        mov     edi, ebx
        jz      L_db
    L_be:
        mov     ecx, dword ptr [edi+0x4]
        mov     edx, dword ptr [edi]
        push    ecx
        push    edx
        call    FUN_00658ef0
        add     esp, 8
        mov     ecx, edi
        call    FUN_006583b0
        add     edi, 0xc
        cmp     edi, ebp
        jnz     L_be
    L_db:
        pop     edi
        mov     dword ptr [esi+0x400008], ebx
        mov     eax, esi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 8
        ret
    }
}
