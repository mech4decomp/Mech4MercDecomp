/*
 * FUN_005667c0 (233 B) — Object ID to pointer conversion with validation.
 *
 * Validates a flag ID, converts it to a pointer via FUN_004fcb30,
 * with debug assertions.
 *
 * __stdcall (one param: int flag_id).
 * CFLAGS: /O1
 */

extern int __cdecl FUN_005666d0(const char *msg);
extern int __cdecl FUN_006fabf0(const char *msg);
extern void *__stdcall FUN_004fcb30(int id);
extern char __stdcall FUN_00415230(int val);

__declspec(naked) void *__stdcall FUN_005667c0(int flag_id)
{
    

extern int DAT_007dde2c;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f2524;
__asm {
push    ebp
        mov     ebp, esp
        mov al, byte ptr [DAT_007dde2c]
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        mov     esi, edi
        sar     esi, 0x18
        test    al, al
        jz      l_check1_done
        test    esi, esi
        jge     l_check1_ok
        push    0x77f708
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      l_check1_ok
        int     3

l_check1_ok:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      l_check1_done
        cmp     esi, 0x12
        jl      l_check1_done
        push    0x77f708
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      l_check1_done
        int     3

l_check1_done:
        mov eax, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x10]
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      l_check2_done
        test    esi, esi
        jnz     l_check2_notnull
        push    0x77f708
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      l_check2_notnull
        int     3

l_check2_notnull:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      l_check2_done
        mov eax, dword ptr [DAT_007f2524]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     l_check2_done
        push    0x77f68c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      l_check2_done
        int     3

l_check2_done:
        test    esi, esi
        jnz     l_not_null
        pop     edi
        xor     eax, eax
        pop     esi
        pop     ebp
        ret

l_not_null:
        xor     eax, eax
        cmp     esi, -0x1
        setz    al
        pop     edi
        dec     eax
        and     eax, esi
        pop     esi
        pop     ebp
        ret
    }


}
