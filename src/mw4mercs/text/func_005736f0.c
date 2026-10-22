/*
 * FUN_005736f0 (661 B) — Resume patrol handler (variant 3).
 *
 * Reads parameters from a bytecode stream, validates state,
 * computes a float value, and dispatches to a virtual method.
 *
 * __cdecl (params on stack), returns undefined4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0064db40(void);
extern int __cdecl FUN_005666d0(void);
extern int __cdecl FUN_006fabf0(int param);
extern int __stdcall FUN_004fcb30(int param);
extern int __cdecl FUN_00415230(int param);
extern void __cdecl FUN_005c1990(void);
extern void __cdecl FUN_00563060(int param);

__declspec(naked) unsigned long __cdecl FUN_005736f0(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern int DAT_0080592c;
extern int DAT_007dde2c;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f211c;
extern int DAT_007f23d8;
extern int DAT_007f1f70;
extern int DAT_0078096c;
extern int DAT_00779d44;
extern void __cdecl FUN_0075d96e(void);
extern int DAT_007f23b0;
extern int DAT_00805928;
extern int DAT_0080d9b0;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x10
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        push    ebx
        push    esi
        inc     eax
        push    edi
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov eax, dword ptr [DAT_0080592c]
        mov     esi, dword ptr [eax]
        sub     eax, 4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov eax, dword ptr [DAT_0080592c]
        mov     ecx, dword ptr [eax]
        sub     eax, 4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov     dword ptr [ebp - 4], ecx
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov eax, dword ptr [DAT_0080592c]
        mov     edi, dword ptr [eax]
        sub     eax, 4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov eax, dword ptr [DAT_0080592c]
        mov     ecx, dword ptr [eax]
        sub     eax, 4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        cmp     ecx, 1
        movsx   ecx, byte ptr [eax]
        setz    dl
        inc     eax
        mov     byte ptr [ebp - 0xc], dl
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
        mov     byte ptr [ebp - 8], dl
        jz      l_skip_assert1
        cmp     esi, -1
        jnz     l_skip_assert1
        push    0x77fc40
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      l_skip_assert1
        int     3
l_skip_assert1:
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     ecx, eax
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        mov     dword ptr [ebp - 0x10], ecx
        jz      l_skip_assert2
        mov eax, dword ptr [DAT_007f211c]
        mov     ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     l_skip_assert2a
        push    0x780b58
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      l_skip_assert2a
        int     3
l_skip_assert2a:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      l_skip_assert2
        mov eax, dword ptr [DAT_007f23d8]
        mov ecx, dword ptr [DAT_007f1f70]
        mov     ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     l_skip_assert2b
        push    0x780b0c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      l_skip_assert2b
        int     3
l_skip_assert2b:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      l_skip_assert2
        mov ecx, dword ptr [DAT_007f1f70]
        mov     al, byte ptr [ecx + 0x2f9]
        test    al, al
        jz      l_skip_assert2
        push    0x780ae4
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      l_skip_assert2
        int     3
l_skip_assert2:
        fild    dword ptr [ebp - 4]
        fmul dword ptr [DAT_0078096c]
        fmul dword ptr [DAT_00779d44]
        call FUN_0075d96e
        mov edx, dword ptr [DAT_007f1f70]
        mov     ecx, dword ptr [edx + 4]
        mov     ebx, eax
        mov eax, dword ptr [DAT_007f23b0]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      l_skip_vcall1
        mov esi, dword ptr [DAT_007f1f70]
        mov     al, byte ptr [esi + 0x51c]
        test    al, al
        jz      l_skip_vcall1
        mov     eax, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [eax + 0x104]
        test    al, al
        jz      l_skip_vcall1
        mov     ecx, esi
        call    FUN_005c1990
l_skip_vcall1:
        mov     eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [DAT_007f1f70]
        mov     edx, dword ptr [ecx]
        push    eax
        mov     eax, dword ptr [ebp - 0xc]
        push    eax
        mov     eax, dword ptr [ebp - 0x10]
        push    edi
        push    ebx
        push    eax
        call    dword ptr [edx + 0x1a8]
        mov esi, dword ptr [DAT_0080592c]
        mov ecx, dword ptr [DAT_00805928]
        add     esi, 4
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     bl, al
        mov dword ptr [DAT_0080592c], esi
        jc      l_no_overflow
        push    0
        call    FUN_00563060
        add     esp, 4
l_no_overflow:
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        xor     edx, edx
        test    bl, bl
        setnz   dl
        pop     edi
        inc     eax
        mov dword ptr [DAT_00805918], eax
        mov eax, dword ptr [DAT_0080d9b0]
        mov dword ptr [DAT_00805908], ecx
        mov     dword ptr [esi], edx
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
