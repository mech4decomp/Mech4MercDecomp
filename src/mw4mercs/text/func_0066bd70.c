/*
 * FUN_0066bd70 (94 B) — __thiscall. Parses a string via sscanf (IAT
 * 0x0076b2dc) into 6 fields + 2 ints; stores nonzero flags at +0x14/+0x15.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void *g_0076b2dc;

__declspec(naked) void FUN_0066bd70(void)
{
    __asm {
        sub     esp, 0x8
        push    esi
        or      eax, 0xffffffff
        mov     esi, ecx
        mov     dword ptr [esp + 0x4], eax
        mov     dword ptr [esp + 0x8], eax
        lea     eax, [esp + 0x8]
        push    eax
        lea     ecx, [esp + 0x8]
        push    ecx
        lea     edx, [esi + 0x10]
        push    edx
        lea     eax, [esi + 0xc]
        push    eax
        mov     eax, dword ptr [esp + 0x20]
        lea     ecx, [esi + 0x8]
        push    ecx
        lea     edx, [esi + 0x4]
        push    edx
        push    esi
        push    0x796eb4
        push    eax
        call    dword ptr [g_0076b2dc]
        mov     ecx, dword ptr [esp + 0x28]
        mov     eax, dword ptr [esp + 0x2c]
        add     esp, 0x24
        test    ecx, ecx
        setnz   cl
        test    eax, eax
        setnz   dl
        mov     byte ptr [esi + 0x14], cl
        mov     byte ptr [esi + 0x15], dl
        pop     esi
        add     esp, 0x8
        ret     0x4
    }
}
