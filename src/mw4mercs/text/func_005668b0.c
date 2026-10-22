/*
 * FUN_005668b0 (278 B) — Object ID to pointer conversion with type checking.
 *
 * Converts an object ID to a pointer via FUN_004fcb30, validates the type,
 * and follows the vtable to get the actual object pointer.
 *
 * __stdcall (one param: int object_id).
 * CFLAGS: /O1
 */

extern int __cdecl FUN_005666d0(const char *msg);
extern int __cdecl FUN_006fabf0(const char *msg);
extern void *__stdcall FUN_004fcb30(int id);
extern char __stdcall FUN_00415230(int val);

__declspec(naked) void *__stdcall FUN_005668b0(int object_id)
{
    

extern int DAT_0080d964;
extern int DAT_007dde2c;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f24d8;
extern int DAT_007f268c;
__asm {
push    ebp
        mov     ebp, esp
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x8]
        cmp     edi, -0x1
        jnz     l_normal
        mov eax, dword ptr [DAT_0080d964]
        test    eax, eax
        jz      l_ret_zero
        mov     esi, dword ptr [eax + 0x170]
        jmp     l_check_ptr

l_normal:
        mov al, byte ptr [DAT_007dde2c]
        mov     esi, edi
        sar     esi, 0x18
        test    al, al
        jz      l_check1_done
        test    esi, esi
        jge     l_check1_ok
        push    0x77f724
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
        push    0x77f724
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
        test    esi, esi
        jnz     l_not_null1
        pop     edi
        pop     esi
        pop     ebp
        ret

l_not_null1:
        cmp     esi, -0x1
        jnz     l_not_invalid
        pop     edi
        xor     eax, eax
        pop     esi
        pop     ebp
        ret

l_not_invalid:
        mov eax, dword ptr [DAT_007f24d8]
        mov     edi, dword ptr [esi + 0x4]
        push    eax
        mov     ecx, edi
        call    FUN_00415230
        cmp     al, 0x1
        jnz     l_type_mismatch
        mov     esi, dword ptr [esi + 0x170]

l_check_ptr:
        test    esi, esi
        jz      l_ret_zero
        mov eax, dword ptr [DAT_007f268c]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jz      l_ret_ptr

l_ret_zero:
        pop     edi
        xor     eax, eax
        pop     esi
        pop     ebp
        ret

l_type_mismatch:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      l_ret_ptr
        mov eax, dword ptr [DAT_007f268c]
        push    eax
        mov     ecx, edi
        call    FUN_00415230
        test    al, al
        jnz     l_ret_ptr
        push    0x77f68c
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 0x8
        test    eax, eax
        jz      l_ret_ptr
        int     3

l_ret_ptr:
        pop     edi
        mov     eax, esi
        pop     esi
        pop     ebp
        ret
    }


}
