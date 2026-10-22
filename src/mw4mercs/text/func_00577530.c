/*
 * FUN_00577530 (214 B) — Object ID conversion/lookup function.
 *
 * Takes an object ID, validates it (debug assertions), then looks up
 * the object via FUN_004FCB30 and verifies the type via FUN_00415230.
 *
 * __cdecl, returns int (pointer to object or -1 on failure).
 *
 * CFLAGS: /O1
 */

extern int __cdecl FUN_004FCB30(int param);
extern int __cdecl FUN_005666D0(const char *msg);
extern int __cdecl FUN_006FABF0(int param);
extern int __cdecl FUN_00415230(int this, int param);

__declspec(naked) int __cdecl FUN_00577530(int param_1)
{
    

extern int DAT_007dde2c;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007dc690;
__asm {
push    ebp
        mov     ebp, esp
        mov al, byte ptr [DAT_007dde2c]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 8]
        mov     esi, edi
        sar     esi, 0x18
        test    al, al
        jz      l_skip_assert1
        test    esi, esi
        jge     l_skip_assert1a
        push    0x77f724
        call    FUN_005666D0
        push    eax
        call    FUN_006FABF0
        add     esp, 8
        test    eax, eax
        jz      l_skip_assert1a
        int     3
l_skip_assert1a:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      l_skip_assert1
        cmp     esi, 0x12
        jl      l_skip_assert1
        push    0x77f724
        call    FUN_005666D0
        push    eax
        call    FUN_006FABF0
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
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004FCB30
        mov     esi, eax
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      l_done
        test    esi, esi
        jnz     l_skip_assert2
        push    0x77f724
        call    FUN_005666D0
        push    eax
        call    FUN_006FABF0
        add     esp, 8
        test    eax, eax
        jz      l_skip_assert2
        int     3
l_skip_assert2:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      l_done
        mov eax, dword ptr [DAT_007dc690]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     l_done
        push    0x781288
        call    FUN_005666D0
        push    eax
        call    FUN_006FABF0
        add     esp, 8
        test    eax, eax
        jz      l_done
        int     3
l_done:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret
    }


}
