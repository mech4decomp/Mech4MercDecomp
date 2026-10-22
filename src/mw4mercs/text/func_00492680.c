/*
 * FUN_00492680 (84 B) — __thiscall (ECX = this), RET 4 (1 stack param).
 * Destructor-like: decrements refcount on field_10, frees self via
 * FUN_004084e0, decrements this[1] counter.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00410500(int a, int b, int c, int d);
extern void __cdecl FUN_004084e0(void *ptr);

__declspec(naked) void __fastcall FUN_00492680(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi]
        push    edi
        lea     ecx, [eax + 0xc]
        push    ecx
        lea     edx, [eax + 0x8]
        push    edx
        add     eax, 4
        push    eax
        mov     eax, dword ptr [esp + 0x18]
        push    eax
        call    FUN_00410500
        mov     edi, eax
        mov     eax, dword ptr [edi + 0x10]
        add     esp, 0x10
        test    eax, eax
        jz      l_skip_decref
        mov     cl, byte ptr [eax - 1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_skip_decref
        push    eax
        call    FUN_004084e0
        add     esp, 4
l_skip_decref:
        test    edi, edi
        jz      l_skip_free
        push    edi
        call    FUN_004084e0
        add     esp, 4
l_skip_free:
        mov     eax, dword ptr [esi + 4]
        dec     eax
        pop     edi
        mov     dword ptr [esi + 4], eax
        pop     esi
        ret     4
    }
}
