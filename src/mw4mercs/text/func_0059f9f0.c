/*
 * FUN_0059f9f0 (195 B) — Object iteration and population method.
 *
 * Iterates through items from a virtual method call and populates
 * them via FUN_0059FC10.
 *
 * __thiscall (ECX = this), RET 8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00412570(void *dst, void *src);
extern void *__cdecl FUN_005178D0(void);
extern void *__cdecl FUN_006140C0(void *obj);
extern void __cdecl FUN_004D1F10(void *this);
extern int __cdecl FUN_004DA8D0(void *a, void *b);
extern void *__stdcall FUN_0059FC10(void *this, void *a, void *b, void *c, void *d);
extern void __cdecl FUN_004D21C0(void *this);
extern void __cdecl FUN_004084E0(void *ptr);

__declspec(naked) void __stdcall FUN_0059F9F0(void *param1, void *param2)
{
    __asm {
        sub     esp, 0x44
        mov     eax, dword ptr [esp + 0x48]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebp, ecx

        push    ecx
        mov     ecx, esp
        push    eax
        call    FUN_00412570

        call    FUN_005178D0
        mov     ecx, dword ptr [eax + 0x88]
        call    FUN_006140C0

        lea     ecx, [esp + 0x10]
        mov     edi, eax
        call    FUN_004D1F10

        mov     cx, word ptr [edi + 0x10]
        mov     dx, word ptr [edi + 0x12]
        lea     eax, [esp + 0x58]
        mov     word ptr [esp + 0x58], cx
        push    eax
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     word ptr [esp + 0x62], dx
        call    FUN_004DA8D0

        mov     eax, dword ptr [esp + 0x64]
        add     esp, 8
        test    eax, eax
        jle     cleanup

        mov     esi, dword ptr [edi + 0x18]
        mov     bx, word ptr [edi + 0x10]
        mov     di, word ptr [edi + 0x12]
        mov     dword ptr [esp + 0x5C], eax

loop_start:
        test    esi, esi
        je      skip_ref
        inc     byte ptr [esi - 1]

skip_ref:
        push    1
        push    esi
        lea     edx, [esp + 0x60]
        push    edx
        lea     eax, [esp + 0x5C]
        push    eax
        mov     ecx, ebp
        mov     word ptr [esp + 0x68], bx
        mov     word ptr [esp + 0x6A], di
        call    FUN_0059FC10

        test    esi, esi
        je      check_count
        mov     cl, byte ptr [esi - 1]
        lea     eax, [esi - 1]
        dec     cl
        mov     byte ptr [eax], cl
        jne     check_count
        push    eax
        call    FUN_004084E0
        add     esp, 4

check_count:
        dec     dword ptr [esp + 0x5C]
        jne     loop_start

cleanup:
        lea     ecx, [esp + 0x10]
        call    FUN_004D21C0

        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x44
        ret     8
    }
}
