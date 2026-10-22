/*
 * FUN_00700ed0 (300 B) — __cdecl, RET.
 *
 * Zone-server config loader: reads "ZoneServer" via FUN_00708930,
 * falls back to "mwmatch.zone.com" (0x79fbbc) via FUN_00708a10,
 * allocates/copies the string via FUN_006f3c80 into DAT_008589cc,
 * then reads/writes the "ZoneAdvertisePort" (0x79fb94) value into
 * DAT_008589d0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_008589d0;
extern int DAT_008589cc;
extern void __cdecl FUN_00708930(const char *key, char *buf, int *len, int a);
extern void __cdecl FUN_00708a10(const char *a, const char *b, int c);
extern void __cdecl FUN_006f4230(void *ptr);
extern void *__cdecl FUN_006f3c80(int len, int a);
extern void __cdecl FUN_007089b0(const char *key, int *val, int a);

__declspec(naked) void __cdecl FUN_00700ed0(void)
{
    __asm {
        sub     esp, 0x208
        mov     eax, dword ptr [DAT_008589d0]
        push    esi
        push    edi
        push    0
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x18]
        push    edx
        push    0x79fb88
        mov     dword ptr [esp + 0x18], eax
        mov     dword ptr [esp + 0x1c], 0x200
        mov     byte ptr [esp + 0x20], 0
        call    FUN_00708930
        mov     eax, dword ptr [esp + 0xc]
        test    eax, eax
        jz      L_0f14
        mov     al, byte ptr [esp + 0x10]
        test    al, al
        jnz     L_0f32
L_0f14:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, 0x79fbbc
        repne   scasb
        not     ecx
        push    ecx
        push    0x79fbbc
        push    0x79fb88
        call    FUN_00708a10
L_0f32:
        mov     eax, dword ptr [DAT_008589cc]
        test    eax, eax
        jz      L_0f4b
        push    eax
        call    FUN_006f4230
        mov     dword ptr [DAT_008589cc], 0
L_0f4b:
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x10]
        repne   scasb
        push    0
        not     ecx
        push    ecx
        call    FUN_006f3c80
        or      ecx, 0xffffffff
        mov     edx, eax
        xor     eax, eax
        lea     edi, [esp + 0x10]
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 2
        mov     esi, edi
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
        mov     eax, dword ptr [esp + 8]
        test    eax, eax
        mov     dword ptr [DAT_008589cc], edx
        mov     esi, 4
        jnz     L_0fb3
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        lea     edx, [esp + 0x10]
        push    edx
        push    0x79fb94
        mov     dword ptr [esp + 0x1c], esi
        call    FUN_00708930
        mov     eax, dword ptr [esp + 8]
L_0fb3:
        mov     ecx, dword ptr [esp + 0xc]
        test    ecx, ecx
        jz      L_0fbf
        test    eax, eax
        jg      L_0fee
L_0fbf:
        push    esi
        lea     eax, [esp + 0xc]
        push    eax
        push    0x79fb94
        mov     dword ptr [esp + 0x14], 0x8fc
        mov     dword ptr [esp + 0x18], esi
        call    FUN_007089b0
        mov     ecx, dword ptr [esp + 8]
        pop     edi
        mov     dword ptr [DAT_008589d0], ecx
        pop     esi
        add     esp, 0x208
        ret
L_0fee:
        pop     edi
        mov     dword ptr [DAT_008589d0], eax
        pop     esi
        add     esp, 0x208
        ret
    }
}
