/*
 * FUN_00615f60 (144 B) — __fastcall (ECX = this), RET. Refcount-increments
 * the object at this+0x6c, builds a string via FUN_004125e0 / FUN_00412740,
 * then calls FUN_00615ff0 with a flag derived from this+0x70 and refcount-
 * decrements/frees the object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_004125e0(int a, int b);
extern int __cdecl FUN_00412740(int a);
extern void __cdecl FUN_004084e0(int p);
extern void __cdecl FUN_00615ff0(int a, int b, int c);

__declspec(naked) void __fastcall FUN_00615f60(int thisptr)
{
    __asm {
        sub     esp, 0x8
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x6c]
        test    eax, eax
        mov     dword ptr [esp + 0x4], eax
        jz      l_78
        inc     byte ptr [eax - 0x1]
        mov     eax, dword ptr [esp + 0x4]
    l_78:
        push    0x78c500
        push    eax
        lea     ecx, [esp + 0x10]
        call    FUN_004125e0
        push    eax
        lea     ecx, [esp + 0x8]
        call    FUN_00412740
        mov     eax, dword ptr [esp + 0x8]
        test    eax, eax
        jz      l_ac
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_ac
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_ac:
        mov     al, byte ptr [esi + 0x70]
        test    al, al
        push    0x1
        jz      l_be
        mov     eax, dword ptr [esp + 0x8]
        push    0x1
        push    eax
        jmp     l_c5
    l_be:
        mov     ecx, dword ptr [esp + 0x8]
        push    0x0
        push    ecx
    l_c5:
        mov     ecx, esi
        call    FUN_00615ff0
        mov     eax, dword ptr [esp + 0x4]
        test    eax, eax
        mov     byte ptr [esi + 0x70], 0x1
        pop     esi
        jz      l_ec
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     l_ec
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
    l_ec:
        add     esp, 0x8
        ret
    }
}
