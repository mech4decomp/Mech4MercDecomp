/*
 * FUN_00517af0 (735 B) — Complex data processing function
 * Iterates through items, processes strings, stores results.
 * __thiscall (ECX = this)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_004084d0(int size);
void __cdecl FUN_004084e0(void *ptr);
int __cdecl FUN_0040d9b0(void);
int __cdecl FUN_0040f060(int ptr);
int __cdecl FUN_00416bc0(int size);
int __cdecl FUN_00416c60(void);
int __cdecl FUN_00416cc0(void);
int __cdecl FUN_00412740(int ptr);
int __cdecl FUN_00617920(int ptr);
int __cdecl FUN_006f3c80(int size, int flag);
void __cdecl FUN_006f4230(int ptr);

__declspec(naked) void func_00517af0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x2C
        mov     eax, dword ptr [esp + 0x30]
        mov     edx, dword ptr [eax + 0x0C]
        push    ebx
        mov     ebx, dword ptr [eax + 0x08]
        push    ebp
        mov     ebp, dword ptr [eax + 0x14]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [eax + 0x04]
        push    edi
        mov     edi, dword ptr [esi + 0x409A0]
        test    edi, edi
        mov     dword ptr [esp + 0x40], ecx
        mov     ecx, dword ptr [eax + 0x10]
        mov     dword ptr [esp + 0x1C], edx
        mov     edx, dword ptr [eax + 0x18]
        mov     dword ptr [esp + 0x20], esi
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x24], edx
        jle     skip_alloc_array
        mov     eax, dword ptr [esi + 0x409A4]
        test    eax, eax
        jz      alloc_array
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi + 0x409A4], 0x00
alloc_array:
        push    0x00
        lea     eax, [edi * 0x04]
        push    eax
        call    FUN_006f3c80
        mov     dword ptr [esi + 0x409A4], eax
skip_alloc_array:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx + 0x44]
        xor     eax, 0x85739531
        add     eax, 0x54
        push    eax
        lea     ecx, [esp + 0x2C]
        call    FUN_00416bc0
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [esp + 0x40]
        mov edi, dword ptr [DAT_007dab40]
        mov     dword ptr [esp + 0x28], 0x779F0C
        mov     eax, dword ptr [ecx]
        mov     ecx, dword ptr [edx]
        xor     eax, edi
        push    ecx
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        call    FUN_00617920
        mov     edx, dword ptr [esp + 0x18]
        mov     dword ptr [esp + 0x10], 0x00
        mov     esi, dword ptr [eax + 0x10]
        test    esi, esi
        mov     dword ptr [edx], 0x00
        mov     dword ptr [ebp], 0x2C
        jz      skip_init
        lea     eax, [esi + 0x10]
        push    eax
        lea     ecx, [esp + 0x44]
        call    FUN_0040f060
        lea     ecx, [esp + 0x40]
        push    ecx
        lea     ecx, [esp + 0x14]
        call    FUN_00412740
        lea     ecx, [esp + 0x40]
        call    FUN_0040d9b0
        mov     edx, dword ptr [esi + 0x24]
        mov     dword ptr [ebp], edx
skip_init:
        mov     eax, dword ptr [ebx]
        test    eax, eax
        jz      skip_free_slot
        push    eax
        call    FUN_006f4230
        mov     dword ptr [ebx], 0x00
skip_free_slot:
        push    0x00
        push    0x80
        call    FUN_006f3c80
        or      ecx, 0xFFFFFFFF
        mov     edx, eax
        xor     eax, eax
        mov     edi, 0x76B768
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x02
        mov     esi, edi
        mov     dword ptr [ebx], edx
        mov     edi, edx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x03
        rep     movsb
        lea     ecx, [esp + 0x28]
        mov     dword ptr [esp + 0x14], 0x01
        call    FUN_00416cc0
        mov     ebp, eax
        test    ebp, ebp
        jz      done_outer
        mov     eax, dword ptr [esp + 0x1C]
        lea     esi, [ebx + 0x04]
        sub     eax, ebx
        mov     dword ptr [esp + 0x40], esi
        mov     dword ptr [esp + 0x1C], eax
main_loop:
        cmp     dword ptr [ebp + 0x20], 0x02
        jz      next_iter_main
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      skip_free_slot2
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi], 0x00
skip_free_slot2:
        push    0x00
        push    0x80
        call    FUN_006f3c80
        mov     edx, dword ptr [ebp + 0x10]
        test    edx, edx
        mov     ebx, eax
        mov     dword ptr [esi], ebx
        jz      skip_inc_ref2
        inc     byte ptr [edx - 0x01]
skip_inc_ref2:
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x02
        mov     esi, edi
        mov     edi, ebx
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x03
        test    edx, edx
        rep     movsb
        jz      skip_dec_ref2
        mov     al, byte ptr [edx - 0x01]
        dec     edx
        dec     al
        mov     byte ptr [edx], al
        jnz     skip_dec_ref2
        push    edx
        call    FUN_004084e0
        add     esp, 0x04
skip_dec_ref2:
        mov     ecx, dword ptr [ebp + 0x20]
        mov     edx, dword ptr [esp + 0x1C]
        mov     eax, dword ptr [esp + 0x40]
        mov     edi, dword ptr [esp + 0x14]
        mov     dword ptr [edx + eax], ecx
        mov     eax, dword ptr [esp + 0x20]
        mov     eax, dword ptr [eax + 0x409A4]
        mov     cx, word ptr [ebp + 0x18]
        mov     dx, word ptr [ebp + 0x1A]
        lea     eax, [eax + edi * 0x04]
        mov     word ptr [eax], cx
        mov     word ptr [eax + 0x02], dx
        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jz      inc_counter
        mov     ebp, dword ptr [ebp + 0x10]
        test    ebp, ebp
        jz      skip_inc_ref3
        inc     byte ptr [ebp - 0x01]
skip_inc_ref3:
        mov     eax, dword ptr [esp + 0x10]
        mov     esi, ebp
strcmp_loop:
        mov     dl, byte ptr [eax]
        mov     bl, byte ptr [esi]
        mov     cl, dl
        cmp     dl, bl
        jnz     strcmp_diff
        test    cl, cl
        jz      strcmp_eq
        mov     dl, byte ptr [eax + 0x01]
        mov     bl, byte ptr [esi + 0x01]
        mov     cl, dl
        cmp     dl, bl
        jnz     strcmp_diff
        add     eax, 0x02
        add     esi, 0x02
        test    cl, cl
        jnz     strcmp_loop
strcmp_eq:
        xor     eax, eax
        jmp     strcmp_done
strcmp_diff:
        sbb     eax, eax
        sbb     eax, -1
strcmp_done:
        test    eax, eax
        setz    bl
        test    ebp, ebp
        jz      skip_dec_ref3
        mov     cl, byte ptr [ebp - 0x01]
        lea     eax, [ebp - 0x01]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_dec_ref3
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_dec_ref3:
        test    bl, bl
        jz      inc_counter
        mov     eax, dword ptr [esp + 0x18]
        mov     dword ptr [eax], edi
inc_counter:
        mov     eax, dword ptr [esp + 0x40]
        inc     edi
        add     eax, 0x04
        mov     dword ptr [esp + 0x14], edi
        mov     dword ptr [esp + 0x40], eax
        mov     esi, eax
next_iter_main:
        lea     ecx, [esp + 0x28]
        call    FUN_00416cc0
        mov     ebp, eax
        test    ebp, ebp
        jnz     main_loop
done_outer:
        mov     ecx, dword ptr [esp + 0x24]
        mov     edx, dword ptr [esp + 0x14]
        pop     edi
        pop     esi
        mov     dword ptr [ecx], edx
        mov     eax, dword ptr [esp + 0x08]
        test    eax, eax
        pop     ebp
        pop     ebx
        jz      skip_free_last
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free_last
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_free_last:
        lea     ecx, [esp + 0x18]
        call    FUN_00416c60
        mov     eax, 0x01
        add     esp, 0x2C
        ret     0x08
    }


}
