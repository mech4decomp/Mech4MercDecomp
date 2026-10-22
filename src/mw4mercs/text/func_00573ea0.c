/*
 * FUN_00573ea0 (792 B) — Move object handler.
 *
 * Reads parameters from a bytecode stream, resolves object ID,
 * validates state, and dispatches to a virtual method.
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
extern int __cdecl FUN_00566b90(int param);

__declspec(naked) unsigned long __cdecl FUN_00573ea0(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern int DAT_0080592c;
extern int DAT_0080d964;
extern int DAT_007dde2c;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007dc690;
extern int DAT_00805928;
extern int DAT_0080d9b0;
extern int DAT_007f23d8;
extern int DAT_007f1f70;
extern int DAT_0078096c;
extern int DAT_00779d44;
extern void __cdecl FUN_0075d936(void);
extern int DAT_007f23b0;
extern int DAT_007f25c0;
__asm {
push    ebp
        mov     ebp, esp
        push    ecx
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
        cmp     esi, -1
        mov     dword ptr [ebp - 4], ecx
        mov dword ptr [DAT_0080592c], eax
        jnz     l_not_minus1
        mov eax, dword ptr [DAT_0080d964]
        jmp     l_resolved
l_not_minus1:
        mov al, byte ptr [DAT_007dde2c]
        mov     edi, esi
        sar     edi, 0x18
        test    al, al
        jz      l_skip_assert1
        test    edi, edi
        jge     l_check_upper
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      l_check_upper
        int     3
l_check_upper:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      l_skip_assert1
        cmp     edi, 0x12
        jl      l_skip_assert1
        push    0x77f724
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      l_skip_assert1
        int     3
l_skip_assert1:
        mov edx, dword ptr [DAT_007dab44]
        mov eax, dword ptr [DAT_007dab40]
        xor     eax, dword ptr [edx]
        mov     ecx, dword ptr [eax + 0x10]
        push    esi
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      l_skip_assert2
        test    esi, esi
        jnz     l_skip_assert2a
        push    0x77f724
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
        mov eax, dword ptr [DAT_007dc690]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     l_skip_assert2
        push    0x77f68c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      l_skip_assert2
        int     3
l_skip_assert2:
        test    esi, esi
        jnz     l_not_null
        xor     eax, eax
        jmp     l_resolved
l_not_null:
        xor     eax, eax
        cmp     esi, -1
        setz    al
        dec     eax
        and     eax, esi
l_resolved:
        push    eax
        call    FUN_00566b90
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        jnz     l_ok
        mov esi, dword ptr [DAT_0080592c]
        mov eax, dword ptr [DAT_00805928]
        add     esi, 4
        add     eax, 0xa000
        cmp     esi, eax
        mov dword ptr [DAT_0080592c], esi
        jc      l_no_overflow1
        push    0
        call    FUN_00563060
        add     esp, 4
l_no_overflow1:
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        pop     edi
        inc     eax
        mov     dword ptr [esi], 0
        pop     esi
        mov dword ptr [DAT_00805918], eax
        mov eax, dword ptr [DAT_0080d9b0]
        mov dword ptr [DAT_00805908], ecx
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
l_ok:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      l_skip_assert3
        mov eax, dword ptr [DAT_007f23d8]
        mov ecx, dword ptr [DAT_007f1f70]
        mov     ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     l_skip_assert3a
        push    0x780c78
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      l_skip_assert3a
        int     3
l_skip_assert3a:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      l_skip_assert3
        mov edx, dword ptr [DAT_007f1f70]
        mov     al, byte ptr [edx + 0x2f9]
        test    al, al
        jz      l_skip_assert3
        push    0x780c50
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      l_skip_assert3
        int     3
l_skip_assert3:
        fild    dword ptr [ebp - 4]
        fmul dword ptr [DAT_0078096c]
        fmul dword ptr [DAT_00779d44]
        call FUN_0075d936
        mov     edi, eax
        mov eax, dword ptr [DAT_007f23b0]
        push    eax
        mov eax, dword ptr [DAT_007f1f70]
        mov     ecx, dword ptr [eax + 4]
        call    FUN_00415230
        test    al, al
        jz      l_skip_vcall1
        mov ebx, dword ptr [DAT_007f1f70]
        mov     al, byte ptr [ebx + 0x51c]
        test    al, al
        jz      l_skip_vcall1
        mov     edx, dword ptr [ebx]
        mov     ecx, ebx
        call    dword ptr [edx + 0x104]
        test    al, al
        jz      l_skip_vcall1
        mov     ecx, ebx
        call    FUN_005c1990
l_skip_vcall1:
        mov eax, dword ptr [DAT_007f25c0]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        mov ecx, dword ptr [DAT_007f1f70]
        jz      l_use_1c0
        mov     eax, dword ptr [ecx]
        push    edi
        push    -0x14
        push    0
        push    esi
        call    dword ptr [eax + 0x1b4]
        mov ecx, dword ptr [DAT_007f1f70]
        mov     ecx, dword ptr [ecx + 0x35c]
        mov     edx, dword ptr [ecx]
        push    1
        push    0x42200000
        push    esi
        call    dword ptr [edx + 0x5c]
        mov esi, dword ptr [DAT_0080592c]
        mov     bl, al
        mov eax, dword ptr [DAT_00805928]
        add     esi, 4
        add     eax, 0xa000
        cmp     esi, eax
        mov dword ptr [DAT_0080592c], esi
        jc      l_epilogue
        jmp     l_overflow
l_use_1c0:
        mov     edx, dword ptr [ecx]
        push    edi
        push    esi
        call    dword ptr [edx + 0x1c0]
        mov esi, dword ptr [DAT_0080592c]
        mov     bl, al
        mov eax, dword ptr [DAT_00805928]
        add     esi, 4
        add     eax, 0xa000
        cmp     esi, eax
        mov dword ptr [DAT_0080592c], esi
        jc      l_epilogue
l_overflow:
        push    0
        call    FUN_00563060
        add     esp, 4
l_epilogue:
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        xor     ecx, ecx
        test    bl, bl
        setnz   cl
        pop     edi
        inc     eax
        mov dword ptr [DAT_00805918], eax
        mov eax, dword ptr [DAT_0080d9b0]
        mov dword ptr [DAT_00805908], edx
        mov     dword ptr [esi], ecx
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
