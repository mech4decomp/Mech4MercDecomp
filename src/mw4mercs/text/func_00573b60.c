/*
 * FUN_00573b60 (290 B) — Sit handler.
 *
 * Reads parameters from a bytecode stream, validates state,
 * and dispatches to a virtual method.
 *
 * __fastcall (param_1 in ecx), returns undefined4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0064db40(void);
extern int __cdecl FUN_005666d0(void);
extern int __cdecl FUN_006fabf0(int param);
extern int __cdecl FUN_00415230(int param);
extern void __cdecl FUN_005c1990(void);

__declspec(naked) unsigned long __fastcall FUN_00573b60(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern int DAT_0080592c;
extern int DAT_007dde2c;
extern int DAT_007f23d8;
extern int DAT_007f1f70;
extern int DAT_007f23b0;
extern int DAT_007f20f4;
__asm {
push    ebp
        mov     ebp, esp
        push    ecx
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        inc     eax
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov eax, dword ptr [DAT_0080592c]
        mov     ecx, dword ptr [eax]
        sub     eax, 4
        cmp     ecx, 1
        mov dword ptr [DAT_0080592c], eax
        mov al, byte ptr [DAT_007dde2c]
        setz    dl
        test    al, al
        mov     byte ptr [ebp - 4], dl
        jz      l_skip_assert1
        mov eax, dword ptr [DAT_007f23d8]
        mov ecx, dword ptr [DAT_007f1f70]
        mov     ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     l_skip_assert1a
        push    0x780be0
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      l_skip_assert1a
        int     3
l_skip_assert1a:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      l_skip_assert1
        mov eax, dword ptr [DAT_007f1f70]
        mov     cl, byte ptr [eax + 0x2f9]
        test    cl, cl
        jz      l_skip_assert1
        push    0x780bc0
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      l_skip_assert1
        int     3
l_skip_assert1:
        mov eax, dword ptr [DAT_007f23b0]
        mov ecx, dword ptr [DAT_007f1f70]
        mov     ecx, dword ptr [ecx + 4]
        push    esi
        push    eax
        call    FUN_00415230
        test    al, al
        jz      l_skip_vcall1
        mov esi, dword ptr [DAT_007f1f70]
        mov     al, byte ptr [esi + 0x51c]
        test    al, al
        jz      l_skip_vcall1
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x104]
        test    al, al
        jz      l_skip_vcall1
        mov     ecx, esi
        call    FUN_005c1990
l_skip_vcall1:
        mov eax, dword ptr [DAT_007f20f4]
        push    eax
        mov eax, dword ptr [DAT_007f1f70]
        mov     ecx, dword ptr [eax + 4]
        call    FUN_00415230
        test    al, al
        pop     esi
        jnz     l_skip_vcall2
        mov ecx, dword ptr [DAT_007f1f70]
        mov     eax, dword ptr [ebp - 4]
        mov     edx, dword ptr [ecx]
        push    eax
        call    dword ptr [edx + 0x1b8]
l_skip_vcall2:
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805918], eax
        mov dword ptr [DAT_00805908], ecx
        xor     eax, eax
        mov     esp, ebp
        pop     ebp
        ret
    }


}
