/*
 * FUN_00517910 (474 B) — Data processing/iteration function
 * Iterates through items, processes strings, stores results.
 * __thiscall (ECX = this)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void __cdecl FUN_004084d0(int size);
void __cdecl FUN_004084e0(void *ptr);
int __cdecl FUN_00416bc0(int size);
int __cdecl FUN_00416cc0(void);
int __cdecl FUN_006f3c80(int size, int flag);
void __cdecl FUN_006f4230(int ptr);

__declspec(naked) void func_00517910(void)
{
    

extern int DAT_007dab40;
extern int DAT_007dab44;
__asm {
sub     esp, 0x1C
        mov     eax, dword ptr [esp + 0x20]
        mov edx, dword ptr [DAT_007dab40]
        push    esi
        push    edi
        mov     edi, dword ptr [eax + 0x04]
        mov     eax, dword ptr [eax + 0x08]
        mov     esi, ecx
        mov ecx, dword ptr [DAT_007dab44]
        mov     dword ptr [esp + 0x20], eax
        mov     eax, dword ptr [ecx]
        xor     eax, edx
        mov     edx, dword ptr [eax + 0x4C]
        xor     edx, 0x85739531
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1C], edi
        mov     byte ptr [esp + 0x28], 0x00
        mov     byte ptr [esp + 0x0B], 0x00
        jz      skip_flag1
        mov     byte ptr [esp + 0x28], 0x01
skip_flag1:
        mov     eax, dword ptr [eax + 0x58]
        xor     eax, 0x85739531
        jz      skip_flag2
        mov     byte ptr [esp + 0x0B], 0x01
skip_flag2:
        mov     eax, dword ptr [esi + 0x409A8]
        push    ebx
        push    ebp
        xor     ebp, ebp
        cmp     eax, ebp
        jz      skip_free_old
        push    eax
        call    FUN_006f4230
        mov     dword ptr [esi + 0x409A8], ebp
skip_free_old:
        push    ebp
        push    0xB0
        call    FUN_006f3c80
        mov ecx, dword ptr [DAT_007dab44]
        mov     ebx, dword ptr [ecx]
        mov     dword ptr [esi + 0x409A8], eax
        mov esi, dword ptr [DAT_007dab40]
        push    0x14
        mov     dword ptr [esp + 0x1C], ebp
        xor     ebx, esi
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x04
        test    esi, esi
        jz      null_ctor
        mov     edx, dword ptr [ebx + 0x0C]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x84]
        add     eax, 0x10
        push    eax
        mov     ecx, esi
        call    FUN_00416bc0
        mov     dword ptr [esi], 0x779E88
        mov     dword ptr [esp + 0x14], esi
        jmp     after_ctor
null_ctor:
        mov     dword ptr [esp + 0x14], 0x00
        mov     esi, dword ptr [esp + 0x14]
after_ctor:
        mov     ecx, esi
        call    FUN_00416cc0
        mov     ebx, eax
        test    ebx, ebx
        jz      done
main_loop:
        mov     al, byte ptr [esp + 0x30]
        test    al, al
        jnz     check_flag2_val
        cmp     dword ptr [ebx + 0x20], 0x01
        jz      next_iter
check_flag2_val:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     process_item
        cmp     dword ptr [ebx + 0x20], 0x02
        jz      next_iter
process_item:
        shl     ebp, 0x02
        mov     eax, dword ptr [edi + ebp]
        test    eax, eax
        jz      skip_free_slot
        push    eax
        call    FUN_006f4230
        mov     dword ptr [edi + ebp], 0x00
skip_free_slot:
        push    0x00
        push    0x80
        call    FUN_006f3c80
        mov     edx, dword ptr [ebx + 0x18]
        test    edx, edx
        mov     dword ptr [esp + 0x1C], eax
        mov     dword ptr [edi + ebp], eax
        jz      skip_inc_ref
        inc     byte ptr [edx - 0x01]
skip_inc_ref:
        or      ecx, 0xFFFFFFFF
        xor     eax, eax
        mov     edi, edx
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x02
        mov     esi, edi
        mov     edi, dword ptr [esp + 0x1C]
        rep     movsd
        mov     ecx, eax
        and     ecx, 0x03
        test    edx, edx
        rep     movsb
        jz      skip_dec_ref
        mov     cl, byte ptr [edx - 0x01]
        lea     eax, [edx - 0x01]
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_dec_ref
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
skip_dec_ref:
        mov     edx, dword ptr [esp + 0x20]
        mov     cx, word ptr [ebx + 0x10]
        mov     eax, dword ptr [edx + 0x409A8]
        mov     bx, word ptr [ebx + 0x12]
        mov     edi, dword ptr [esp + 0x24]
        mov     esi, dword ptr [esp + 0x14]
        add     eax, ebp
        mov     word ptr [eax], cx
        mov     word ptr [eax + 0x02], bx
        mov     eax, dword ptr [esp + 0x18]
        inc     eax
        mov     dword ptr [esp + 0x18], eax
        mov     ebp, eax
next_iter:
        mov     ecx, esi
        call    FUN_00416cc0
        mov     ebx, eax
        test    ebx, ebx
        jnz     main_loop
done:
        test    esi, esi
        mov     eax, dword ptr [esp + 0x28]
        mov     dword ptr [eax], ebp
        pop     ebp
        pop     ebx
        jz      skip_delete
        mov     edx, dword ptr [esi]
        push    0x01
        mov     ecx, esi
        call    dword ptr [edx]
skip_delete:
        pop     edi
        mov     eax, 0x01
        pop     esi
        add     esp, 0x1C
        ret     0x08
    }


}
