/*
 * FUN_00555590 (414 B) — This function checks various state flags on an object,
 * then either processes a linked-list node (when field 0x8dc == 2) or iterates
 * through up to 6 sub-objects calling FUN_00417A40 on each until one succeeds.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_00626950(int, int);
extern int __stdcall FUN_00417a40(void *);
extern int __stdcall FUN_00629290(int);
extern void __stdcall FUN_0063d510(int);

__declspec(naked) void __stdcall FUN_00555590(int param1)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x384]
        mov     ecx, dword ptr [eax + 0x10]
        shr     ecx, 0x13
        test    cl, 0x1
        push    edi
        jnz     loc_ret_early
        mov     al, byte ptr [esi + 0x589]
        test    al, al
        jnz     loc_ret_early
        mov     al, byte ptr [esi + 0x5ac]
        test    al, al
        jnz     loc_ret_early
        mov     edx, dword ptr [esp + 0xC]
        mov     eax, dword ptr [edx + 0x10]
        test    eax, eax
        jle     loc_ret_early
        cmp     dword ptr [esi + 0x8dc], 0x2
        jnz     loc_else_path
        mov     esi, dword ptr [esi + 0x938]
        mov     eax, dword ptr [esi + 0x8]
        mov     ecx, dword ptr [eax + 0x8]
        mov     eax, ecx
        test    eax, eax
        mov     dword ptr [esi + 0x8], ecx
        jz      loc_null_check
        cmp     dword ptr [eax], 0x0
        jnz     loc_skip_null
loc_null_check:
        mov     edx, dword ptr [esi + 0x4]
        mov     eax, dword ptr [edx + 0x4]
        mov     dword ptr [esi + 0x8], eax
loc_skip_null:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx + 0x40]
        xor     eax, 0x85739531
        lea     ecx, [edx + 0x40]
        jz      loc_ret_early
        mov     esi, dword ptr [esi + 0x8]
        test    esi, esi
        jz      loc_zero_val
        mov     eax, dword ptr [esi]
        jmp     loc_push_val
loc_zero_val:
        xor     eax, eax
loc_push_val:
        mov     ecx, dword ptr [ecx]
        push    eax
        push    0x2
        xor     ecx, 0x85739531
        call    FUN_00626950
        pop     edi
        pop     esi
        ret     0x4
loc_else_path:
        push    ebx
        xor     bl, bl
        xor     edi, edi
loc_loop_start:
        cmp     edi, 0x6
        jge     loc_loop_done
        mov     ecx, dword ptr [esi + 0x8e0]
        dec     ecx
        mov     eax, ecx
        cmp     eax, 0x1
        mov     dword ptr [esi + 0x8e0], ecx
        jge     loc_skip_clamp
        mov     dword ptr [esi + 0x8e0], 0x6
loc_skip_clamp:
        mov     eax, dword ptr [esi + 0x8e0]
        dec     eax
        cmp     eax, 0x5
        ja      loc_switch_done
        jmp     dword ptr [eax*0x4 + 0x555730]
loc_case_1:
        lea     ecx, [esi + 0x904]
        call    FUN_00417a40
        test    eax, eax
        jbe     loc_switch_done
        jmp     loc_set_flag
loc_case_2:
        lea     ecx, [esi + 0x90c]
        call    FUN_00417a40
        test    eax, eax
        jbe     loc_switch_done
        jmp     loc_set_flag
loc_case_3:
        lea     ecx, [esi + 0x914]
        call    FUN_00417a40
        test    eax, eax
        jbe     loc_switch_done
        jmp     loc_set_flag
loc_case_4:
        lea     ecx, [esi + 0x91c]
        call    FUN_00417a40
        test    eax, eax
        jbe     loc_switch_done
        jmp     loc_set_flag
loc_case_5:
        lea     ecx, [esi + 0x924]
        call    FUN_00417a40
        test    eax, eax
        jbe     loc_switch_done
        jmp     loc_set_flag
loc_case_6:
        lea     ecx, [esi + 0x92c]
        call    FUN_00417a40
        test    eax, eax
        jbe     loc_switch_done
loc_set_flag:
        mov     bl, 0x1
loc_switch_done:
        inc     edi
        test    bl, bl
        jz      loc_loop_start
loc_loop_done:
        mov ecx, dword ptr [DAT_007dab44]
        mov edx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [ecx]
        xor     eax, edx
        mov     edx, dword ptr [eax + 0x40]
        xor     edx, 0x85739531
        pop     ebx
        jz      loc_ret_early
        mov     ecx, dword ptr [eax + 0x40]
        push    0xa
        xor     ecx, 0x85739531
        call    FUN_00629290
        mov     ecx, dword ptr [esi + 0x8e0]
        push    ecx
        mov     ecx, eax
        call    FUN_0063d510
loc_ret_early:
        pop     edi
        pop     esi
        ret     0x4
    }


}
