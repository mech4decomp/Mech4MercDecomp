/*
 * FUN_00530510 (380 B) — __fastcall method.
 * Iterates over player slots, logging connection info for active players.
 * Similar to FUN_00530360 but loops over all slots.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00563550(const char *, ...);
extern void __cdecl FUN_00563C80(int);
extern float __cdecl FUN_006100A0(void);

/* extern data symbols for absolute-memory operands */
extern int DAT_007dab44;
extern int DAT_007dab40;
extern float DAT_0076c5b0;

__declspec(naked) void __fastcall FUN_00530510(void)
{
    
__asm {
push    ebp
        mov     ebp, esp
        and     esp, 0xfffffff8
        sub     esp, 8
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx                    ; ebp = this
        push    edi
        mov     dword ptr [esp + 0x14], ebp
        mov     edi, 0xff                   ; edi = index counter
        lea     esi, [ebp + 0x20607c]       ; esi = base pointer
        xor     ebx, ebx

loop_start:
        cmp     byte ptr [esi - 0x148], bl  ; check active flag
        jz      loop_next
        cmp     dword ptr [esi - 0x34c], ebx ; check pointer
        jz      loop_next

        ; Zero out 0xDD dwords at [esi+0xa64]
        lea     eax, [esi + 0xa64]
        mov     ecx, 0xdd

zero_loop_1:
        mov     dword ptr [eax - 0xdd * 4], ebx
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax - 0x297 * 4], ebx
        mov     dword ptr [eax - 0x1ba * 4], ebx
        add     eax, 4
        dec     ecx
        jnz     zero_loop_1

        ; Zero out 0x117 dwords at [esi+0x1234]
        lea     eax, [esi + 0x1234]
        mov     ecx, 0x117

zero_loop_2:
        mov     dword ptr [eax - 0x117 * 4], ebx
        mov     dword ptr [eax], ebx
        mov     dword ptr [eax + 0x117 * 4], ebx
        mov     dword ptr [eax + 0x22e * 4], ebx
        add     eax, 4
        dec     ecx
        jnz     zero_loop_2

        lea     ecx, [esi - 0x13c]
        push    ecx
        mov     dword ptr [esi - 0x10], 1

        mov     eax, dword ptr [esi - 0x34c]
        fld     dword ptr [eax + 0x3b8]     ; load float
        mov     eax, dword ptr [eax + 0x5c] ; get string
        sub     esp, 8
        fstp    qword ptr [esp]             ; push as double
        push    eax
        lea     edx, [esi - 0x348]
        push    edx
        push    edi                         ; index
        push    0x77b1f8                    ; "Player_Connect\t%d\t%s\t%s\t%.2f\tIS_A_BOT:%s"
        call    FUN_00563550
        push    eax
        call    FUN_00563C80

        mov     eax, dword ptr [ebp + 0x50]
        mov     ecx, dword ptr [eax + 0xe4]
        add     esp, 0x20
        cmp     ecx, ebx
        jz      skip_team

        mov     ecx, dword ptr [esi - 0x144]
        push    ecx
        push    edi
        push    0x77b1bc                    ; "Player_Team\t%d\t%d"
        call    FUN_00563550
        push    eax
        call    FUN_00563C80
        add     esp, 0x10

skip_team:
        mov     edx, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x20]
        add     eax, 0x20
        xor     ecx, 0x85739531
        jz      set_default

        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        cmp     byte ptr [eax + 0x2214], bl
        jnz     use_func

        fld     dword ptr [DAT_0076c5b0]
        fstp    qword ptr [esi - 0xc]
        jmp     done_fp

use_func:
        lea     ecx, [eax + 0x21e8]
        call    FUN_006100A0
        fstp    qword ptr [esi - 0xc]
        jmp     done_fp

set_default:
        mov     dword ptr [esi - 0xc], ebx
        mov     dword ptr [esi - 8], 0xbff00000

done_fp:
        mov     eax, dword ptr [esi]
        mov     edx, dword ptr [esi - 4]
        mov     ecx, eax
        sub     ecx, eax
        sar     ecx, 2
        cmp     ecx, ebx
        jle     copy_done

copy_loop:
        mov     ebp, dword ptr [eax]
        mov     dword ptr [edx], ebp
        add     eax, 4
        add     edx, 4
        dec     ecx
        jnz     copy_loop

        mov     ebp, dword ptr [esp + 0x14]  ; restore ebp

copy_done:
        mov     dword ptr [esi], edx

loop_next:
        inc     edi
        lea     edx, [edi - 0xff]
        add     esi, 0x22ac
        cmp     edx, 0x18
        jl      loop_start

        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
