/*
 * FUN_00573990 (454 B) — Follow path handler.
 *
 * Reads parameters from a bytecode stream, clamps values,
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
extern int __cdecl FUN_005668b0(int param);
extern int __cdecl FUN_00415230(int param);
extern void __cdecl FUN_005c1990(void);

__declspec(naked) unsigned long __cdecl FUN_00573990(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern int DAT_0080592c;
extern int DAT_007dde2c;
extern int DAT_007f23d8;
extern int DAT_007f1f70;
extern int DAT_007f23b0;
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
        mov     edi, dword ptr [eax]
        sub     eax, 4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov eax, dword ptr [DAT_0080592c]
        mov     esi, dword ptr [eax]
        sub     eax, 4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov ecx, dword ptr [DAT_0080592c]
        mov     eax, dword ptr [ecx]
        sub     ecx, 4
        test    esi, esi
        mov dword ptr [DAT_0080592c], ecx
        mov     ebx, eax
        jle     l_clamp1_done
        cmp     esi, 0x1e
        jge     l_clamp1_done
        mov     esi, 0x1e
l_clamp1_done:
        test    eax, eax
        jle     l_clamp2_done
        cmp     eax, 0x1e
        jge     l_clamp2_done
        mov     ebx, 0x1e
l_clamp2_done:
        test    esi, esi
        jge     l_clamp3_done
        cmp     esi, -0x1e
        jle     l_clamp3_done
        mov     esi, 0xffffffe2
l_clamp3_done:
        test    ebx, ebx
        jge     l_clamp4_done
        cmp     ebx, -0x1e
        jle     l_clamp4_done
        mov     ebx, 0xffffffe2
l_clamp4_done:
        push    edi
        call    FUN_005668b0
        add     esp, 4
        test    eax, eax
        mov     dword ptr [ebp - 4], eax
        jnz     l_ok
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        pop     edi
        inc     eax
        pop     esi
        mov dword ptr [DAT_00805918], eax
        mov dword ptr [DAT_00805908], edx
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
l_ok:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      l_skip_assert1
        mov eax, dword ptr [DAT_007f23d8]
        mov ecx, dword ptr [DAT_007f1f70]
        mov     ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     l_skip_assert1a
        push    0x780b9c
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
        push    0x780b78
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
        push    eax
        call    FUN_00415230
        test    al, al
        jz      l_skip_vcall1
        mov edi, dword ptr [DAT_007f1f70]
        mov     al, byte ptr [edi + 0x51c]
        test    al, al
        jz      l_skip_vcall1
        mov     edx, dword ptr [edi]
        mov     ecx, edi
        call    dword ptr [edx + 0x104]
        test    al, al
        jz      l_skip_vcall1
        mov     ecx, edi
        call    FUN_005c1990
l_skip_vcall1:
        mov ecx, dword ptr [DAT_007f1f70]
        mov     edx, dword ptr [ebp - 4]
        mov     eax, dword ptr [ecx]
        push    0x3e8
        push    ebx
        push    esi
        push    edx
        call    dword ptr [eax + 0x1b4]
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        pop     edi
        inc     eax
        pop     esi
        mov dword ptr [DAT_00805918], eax
        mov dword ptr [DAT_00805908], ecx
        xor     eax, eax
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
