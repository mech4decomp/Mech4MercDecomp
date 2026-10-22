/*
 * FUN_00530360 (423 B) — __thiscall method.
 * Player connection/team logging function. Computes an index from
 * a parameter, formats log strings, and initializes struct fields.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_004CDFA0(int);
extern int __cdecl FUN_00563550(const char *, ...);
extern void __cdecl FUN_00563C80(int);
extern float __cdecl FUN_006100A0(void);

/* extern data symbols for absolute-memory operands */
extern int DAT_007dab44;
extern int DAT_007dab40;
extern float DAT_0076c5b0;

__declspec(naked) void __fastcall FUN_00530360(void)
{
    
__asm {
push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi

        mov     edi, dword ptr [esp + 0x18]     ; edi = param_1 (index)
        mov     eax, edi
        shl     eax, 7
        add     eax, edi
        shl     eax, 3
        mov     ebp, ecx                        ; ebp = this
        sub     eax, edi
        mov     ecx, dword ptr [ebp + eax * 8 + 0x3584]
        lea     esi, [ebp + eax * 8]            ; esi = this + index * 0x2038

        mov     eax, dword ptr [ecx + 0x170]
        mov     edx, dword ptr [eax + 0x5c]
        mov     eax, dword ptr [eax + 0x3b8]

        mov     ecx, dword ptr [DAT_007dab44]
        mov     dword ptr [esp + 0x18], eax     ; save float value
        mov     eax, dword ptr [ecx]
        xor     eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x14]
        push    edi
        xor     ecx, 0x85739531
        mov     dword ptr [esp + 0x14], edx     ; save uVar5
        call    FUN_004CDFA0

        mov     eax, dword ptr [eax + 0x30]
        mov     cl, byte ptr [eax]
        xor     ebx, ebx
        cmp     cl, bl
        jnz     name_ok
        mov     eax, 0x77b1f0                  ; "UNKNOWN"

name_ok:
        ; Zero out 0xDD dwords at [esi+0x4074]
        lea     ecx, [esi + 0x4074]
        mov     edx, 0xdd

zero_loop_1:
        mov     dword ptr [ecx - 0xdd * 4], ebx
        mov     dword ptr [ecx], ebx
        mov     dword ptr [ecx - 0x297 * 4], ebx
        mov     dword ptr [ecx - 0x1ba * 4], ebx
        add     ecx, 4
        dec     edx
        jnz     zero_loop_1

        ; Zero out 0x117 dwords at [esi+0x4844]
        lea     ecx, [esi + 0x4844]
        mov     edx, 0x117

zero_loop_2:
        mov     dword ptr [ecx - 0x117 * 4], ebx
        mov     dword ptr [ecx], ebx
        mov     dword ptr [ecx + 0x117 * 4], ebx
        mov     dword ptr [ecx + 0x22e * 4], ebx
        add     ecx, 4
        dec     edx
        jnz     zero_loop_2

        ; FPU: load float from [esp+0x18], push as double
        fld     dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x10]     ; ecx = uVar5
        mov     dword ptr [esi + 0x35f0], 1

        mov     edx, dword ptr [esi + 0x3590]
        push    edx
        sub     esp, 8
        fstp    qword ptr [esp]                 ; push float as double
        push    ecx
        push    eax                             ; name string
        push    edi                             ; index
        push    0x77b1d0                        ; "Player_Connect\t%d\t%s\t%s\t%.2f\t%d"
        call    FUN_00563550
        push    eax
        call    FUN_00563C80
        mov     edx, dword ptr [ebp + 0x50]
        mov     eax, dword ptr [edx + 0xe4]
        add     esp, 0x20
        cmp     eax, ebx
        jz      skip_team_log

        mov     eax, dword ptr [esi + 0x3548]
        push    eax
        push    edi
        push    0x77b1bc                        ; "Player_Team\t%d\t%d"
        call    FUN_00563550
        push    eax
        call    FUN_00563C80
        add     esp, 0x10

skip_team_log:
        mov     ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor     edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x20]
        xor     ecx, 0x85739531
        lea     eax, [edx + 0x20]
        jz      set_default

        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        cmp     byte ptr [eax + 0x2214], bl
        jnz     use_func

        fld     dword ptr [DAT_0076c5b0]
        fstp    qword ptr [esi + 0x35f4]
        jmp     done_fp

use_func:
        lea     ecx, [eax + 0x21e8]
        call    FUN_006100A0
        fstp    qword ptr [esi + 0x35f4]
        jmp     done_fp

set_default:
        mov     dword ptr [esi + 0x35f4], ebx
        mov     dword ptr [esi + 0x35f8], 0xbff00000

done_fp:
        mov     dword ptr [esi + 0x3608], ebx
        mov     dword ptr [esi + 0x360c], ebx

        ; Copy from [esi+0x3600] to [esi+0x35fc]
        mov     eax, dword ptr [esi + 0x3600]
        mov     edx, dword ptr [esi + 0x35fc]
        mov     ecx, eax
        sub     ecx, eax
        sar     ecx, 2
        cmp     ecx, ebx
        jle     copy_done

copy_loop:
        mov     edi, dword ptr [eax]
        mov     dword ptr [edx], edi
        add     eax, 4
        add     edx, 4
        dec     ecx
        jnz     copy_loop

copy_done:
        pop     edi
        mov     dword ptr [esi + 0x3600], edx
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret     4
    }


}
