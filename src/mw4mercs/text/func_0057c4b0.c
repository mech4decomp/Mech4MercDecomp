/*
 * FUN_0057C4B0 (478 B) — Object ID resolution and order dispatch.
 *
 * Reads an object ID from a bytecode stream, resolves it to an object
 * pointer, extracts transform data, and dispatches an order via a
 * virtual method call. Includes debug assertion blocks.
 *
 * __cdecl (params on stack), returns undefined4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void __cdecl FUN_0057C4B0(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern void __cdecl FUN_0064db27(void);
extern int DAT_0080592c;
extern int DAT_0080d964;
extern int DAT_007dde2c;
extern void __cdecl FUN_10056667c(void);
extern void __cdecl FUN_006fab96(void);
extern void __cdecl FUN_100566656(void);
extern void __cdecl FUN_006fab70(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004fca8b(void);
extern void __cdecl FUN_100566611(void);
extern void __cdecl FUN_006fab2b(void);
extern int DAT_007dc690;
extern void __cdecl FUN_10041514c(void);
extern void __cdecl FUN_1005665de(void);
extern void __cdecl FUN_006faaf8(void);
extern void __cdecl FUN_100566a77(void);
extern int DAT_007f20f4;
extern int DAT_007f1f70;
extern void __cdecl FUN_1004150d7(void);
extern void __cdecl FUN_006faa89(void);
extern int DAT_00805928;
extern void __cdecl FUN_100562eb7(void);
extern int DAT_0080d9b0;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x0c
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        push    ebx
        inc     eax
        push    esi
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call FUN_0064db27
        mov eax, dword ptr [DAT_0080592c]
        mov     esi, dword ptr [eax]
        sub     eax, 4
        cmp     esi, -1
        mov dword ptr [DAT_0080592c], eax
        jnz     not_minus_one
        mov eax, dword ptr [DAT_0080d964]
        jmp     resolve_obj
not_minus_one:
        mov al, byte ptr [DAT_007dde2c]
        push    edi
        mov     edi, esi
        sar     edi, 0x18
        test    al, al
        jz      check_after_assert1
        test    edi, edi
        jge     assert1_done
        push    0x77f724
        call FUN_10056667c
        push    eax
        call FUN_006fab96
        add     esp, 8
        test    eax, eax
        jz      assert1_done
        int     3
assert1_done:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      check_after_assert1
        cmp     edi, 0x12
        jl      check_after_assert1
        push    0x77f724
        call FUN_100566656
        push    eax
        call FUN_006fab70
        add     esp, 8
        test    eax, eax
        jz      check_after_assert1
        int     3
check_after_assert1:
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x10]
        push    esi
        xor     ecx, 0x85739531
        call FUN_1004fca8b
        mov     esi, eax
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        pop     edi
        jz      check_result
        test    esi, esi
        jnz     assert2_done
        push    0x77f724
        call FUN_100566611
        push    eax
        call FUN_006fab2b
        add     esp, 8
        test    eax, eax
        jz      assert2_done
        int     3
assert2_done:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      check_result
        mov eax, dword ptr [DAT_007dc690]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call FUN_10041514c
        test    al, al
        jnz     check_result
        push    0x77f68c
        call FUN_1005665de
        push    eax
        call FUN_006faaf8
        add     esp, 8
        test    eax, eax
        jz      check_result
        int     3
check_result:
        test    esi, esi
        jnz     not_null
        xor     eax, eax
        jmp     resolve_obj
not_null:
        xor     eax, eax
        cmp     esi, -1
        setz    al
        dec     eax
        and     eax, esi
resolve_obj:
        push    eax
        call FUN_100566a77
        mov     eax, dword ptr [eax + 0xd8]
        mov     ecx, dword ptr [eax + 0x8c]
        add     eax, 0x80
        mov     dword ptr [ebp - 0x0c], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     dword ptr [ebp - 0x08], edx
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [ebp - 0x04], eax
        mov al, byte ptr [DAT_007dde2c]
        add     esp, 4
        test    al, al
        jz      flyby_check_done
        mov eax, dword ptr [DAT_007f20f4]
        mov ecx, dword ptr [DAT_007f1f70]
        mov     ecx, dword ptr [ecx + 4]
        push    eax
        call FUN_1004150d7
        test    al, al
        jnz     flyby_check_done
        push    0x7813b0
        call FUN_006faa89
        add     esp, 4
        test    eax, eax
        jz      flyby_check_done
        int     3
flyby_check_done:
        mov ecx, dword ptr [DAT_007f1f70]
        mov     edx, dword ptr [ecx]
        lea     eax, [ebp - 0x0c]
        push    eax
        call    dword ptr [edx + 0x1e4]
        mov esi, dword ptr [DAT_0080592c]
        mov ecx, dword ptr [DAT_00805928]
        add     esi, 4
        add     ecx, 0xa000
        cmp     esi, ecx
        mov     bl, al
        mov dword ptr [DAT_0080592c], esi
        jc      stack_ok
        push    0
        call FUN_100562eb7
        add     esp, 4
stack_ok:
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        xor     edx, edx
        test    bl, bl
        setnz   dl
        inc     eax
        mov dword ptr [DAT_00805918], eax
        mov eax, dword ptr [DAT_0080d9b0]
        mov dword ptr [DAT_00805908], ecx
        mov     dword ptr [esi], edx
epilogue:
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
