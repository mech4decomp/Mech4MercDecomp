/*
 * FUN_0059f490 (149 B) — Factory function that creates an object from data.
 *
 * Same pattern as FUN_0059E3B0 but with size 0x54 and constructor
 * FUN_0059F250 instead of 0x30 and FUN_0059E1A0.
 *
 * __cdecl, RET 4 (returns pointer or NULL).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004D1F80(void *dst, int arg, void *src);
extern void __cdecl FUN_004D2310(void *this);
extern void *__cdecl FUN_004084D0(int size);
extern void *__stdcall FUN_0059F250(void *this, void *param);
extern void __cdecl FUN_004D21C0(void *this);

__declspec(naked) void *FUN_0059F490(void *data)
{
    

extern int DAT_007db0ac;
extern int DAT_007db0ae;
__asm {
mov     eax, dword ptr [esp + 4]
        mov     cx, word ptr [eax]
        sub     esp, 0x44
        cmp cx, word ptr [DAT_007db0ac]
        jne     not_magic
        mov     dx, word ptr [eax + 2]
        cmp dx, word ptr [DAT_007db0ae]
        je      magic_match

not_magic:
        push    esi
        push    1
        push    eax
        lea     ecx, [esp + 0xC]
        call    FUN_004D1F80
        lea     ecx, [esp + 4]
        call    FUN_004D2310
        push    0x54
        call    FUN_004084D0
        add     esp, 4
        test    eax, eax
        je      alloc_fail
        lea     ecx, [esp + 4]
        push    ecx
        mov     ecx, eax
        call    FUN_0059F250
        lea     ecx, [esp + 4]
        mov     esi, eax
        call    FUN_004D21C0
        mov     eax, esi
        pop     esi
        add     esp, 0x44
        ret

alloc_fail:
        lea     ecx, [esp + 4]
        xor     esi, esi
        call    FUN_004D21C0
        mov     eax, esi
        pop     esi
        add     esp, 0x44
        ret

magic_match:
        push    0x54
        call    FUN_004084D0
        add     esp, 4
        test    eax, eax
        je      magic_alloc_fail
        push    0
        mov     ecx, eax
        call    FUN_0059F250
        add     esp, 0x44
        ret

magic_alloc_fail:
        xor     eax, eax
        add     esp, 0x44
        ret
    }


}
