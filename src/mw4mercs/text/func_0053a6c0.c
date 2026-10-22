/*
 * FUN_0053A6C0 (1190 B) — Team data loader.
 *
 * Reads team data from a stream, processes team member entries,
 * and populates team-related structures.
 *
 * __thiscall, RET 0x8 (2 stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

#include <windows.h>

extern int __cdecl FUN_004084e0(int ptr);
extern int __fastcall FUN_00415230(void *this, int param);
extern int __stdcall FUN_00416b60(int param);
extern int __stdcall FUN_0041e690(void *a, void *b, int c);
extern void __stdcall FUN_0041e710(void);
extern int __stdcall FUN_004c8eb0(int a, int b);
extern int __stdcall FUN_004cdfa0(int param);
extern int __stdcall FUN_004ce190(int a, int b, int c, int d);
extern void *__fastcall FUN_004cec10(void *this);
extern int __fastcall FUN_004d9910(void *this, void *buf, int flag);
extern int __stdcall FUN_004e2930(void *param);
extern int __fastcall FUN_00531f00(void *this);
extern int __fastcall FUN_00538ae0(void *this, int a, int b);
extern int __fastcall FUN_00544310(void *this, int a, void *b);

__declspec(naked) void __fastcall FUN_0053a6c0(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007db090;
extern int DAT_007f1f84;
extern int DAT_007db094;
__asm {
sub     esp, 0x64
        push    ebx
        push    esi
        mov     esi, dword ptr [esp + 0x74]     ; param_2 (stream)
        xor     ebx, ebx
        cmp     esi, ebx
        push    edi
        mov     edi, ecx                        ; this
        mov     byte ptr [esp + 0x0f], 0x00     ; local_flag = 0
        jz      skip_all                        ; if stream is null, skip

    main_loop:
        mov     eax, dword ptr [esi]            ; vtable
        mov     ecx, esi
        call    dword ptr [eax + 0x08]          ; vfunc[2] - has more data?
        test    eax, eax
        jz      skip_all
        push    ebp

    process_entry:
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x18]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]          ; read byte
        mov     edx, dword ptr [esi]
        push    0x1
        lea     eax, [esp + 0x80]
        push    eax
        mov     ecx, esi
        mov     byte ptr [esp + 0x84], 0x00
        call    dword ptr [edx + 0x20]          ; read byte
        mov     eax, dword ptr [esp + 0x14]     ; team_index
        mov     edx, dword ptr [esi]
        and     eax, 0xff
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax                        ; ecx = team_index * 0x80e (actually * 0x3F7... wait)
        lea     eax, [edi + ecx*0x8]            ; eax = this + team_index * 0x2038
        lea     ecx, [eax + 0x3548]
        mov     dword ptr [ecx], ebx             ; clear field
        push    0x1
        mov     dword ptr [eax + 0x3550], ebx
        push    ecx
        mov     dword ptr [eax + 0x354c], ebx
        mov     ecx, esi
        mov     byte ptr [eax + 0x355c], 0x00
        call    dword ptr [edx + 0x20]          ; read byte
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        and     eax, 0xff
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        lea     eax, [edi + ecx*0x8 + 0x3550]
        push    0x1
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]          ; read byte
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        and     eax, 0xff
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        lea     eax, [edi + ecx*0x8 + 0x354c]
        push    0x1
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]          ; read byte
        mov     eax, dword ptr [esp + 0x14]
        mov     edx, dword ptr [esi]
        and     eax, 0xff
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        lea     eax, [edi + ecx*0x8 + 0x355c]
        push    0x1
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]          ; read byte

        mov ecx, dword ptr [DAT_007dab44]

        mov     eax, dword ptr [ecx]

        xor eax, dword ptr [DAT_007dab40]

        mov     edx, dword ptr [esp + 0x14]
        mov     ecx, dword ptr [eax + 0x14]
        and     edx, 0xff
        push    edx
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        mov     ebp, eax
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], ebp
        call    dword ptr [eax + 0x20]          ; read 4 bytes
        mov     eax, dword ptr [esp + 0x14]
        and     eax, 0xff
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        mov     byte ptr [edi + edx*0x8 + 0x3539], 0x01
        mov     al, byte ptr [edi + 0x16]
        test    al, al
        jnz     skip_team_init

        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esi]
        push    ebx
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x04]          ; vfunc[1]
        push    eax
        lea     ecx, [esp + 0x40]
        call    FUN_0041e690
        mov     ecx, dword ptr [esp + 0x14]
        lea     eax, [esp + 0x34]
        and     ecx, 0xff
        push    eax
        push    ecx
        mov     ecx, edi
        call    FUN_00544310
        mov     eax, dword ptr [esp + 0x14]
        and     eax, 0xff
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        lea     eax, [edi + edx*0x8]
        mov     byte ptr [eax + 0x353c], 0x01
        lea     ecx, [esp + 0x34]
        mov     byte ptr [eax + 0x353b], 0x01
        call    FUN_0041e710

    skip_team_init:
        mov     eax, dword ptr [esp + 0x14]
        and     eax, 0xff
        mov     ecx, eax
        shl     ecx, 7
        add     ecx, eax
        shl     ecx, 3
        sub     ecx, eax
        cmp     dword ptr [edi + ecx*0x8 + 0x3584], ebx
        jz      create_new_player

        mov     eax, dword ptr [esp + 0x18]
        mov     edx, dword ptr [esi]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x18]          ; vfunc[6]
        jmp     check_more_data

    create_new_player:
        mov     edx, dword ptr [edi]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x60]          ; vfunc[0x18]
        mov     ecx, dword ptr [esp + 0x18]
        mov     ebx, eax
        mov     eax, dword ptr [esi]
        push    ecx
        mov     ecx, esi
        mov     dword ptr [esp + 0x28], ebx
        call    dword ptr [eax + 0x18]          ; vfunc[6]
        mov     ecx, ebp
        call    FUN_004cec10
        mov     dl, byte ptr [eax]
        mov     byte ptr [esp + 0x1c], dl
        mov     ax, word ptr [eax + 0x02]
        mov     word ptr [esp + 0x1e], ax
        mov     ecx, dword ptr [ebx]
        push    0x0
        push    ecx
        push    ebx
        lea     ecx, [esp + 0x60]
        call    FUN_0041e690
        push    0x1
        lea     edx, [esp + 0x20]
        push    edx
        lea     eax, [esp + 0x5c]
        push    eax
        call    FUN_004d9910
        mov     ebp, eax
        mov     al, byte ptr [edi + 0x16]
        mov     ebx, dword ptr [ebp + 0x170]
        add     esp, 0x0c
        test    al, al
        jz      skip_team_flag

        mov     ecx, dword ptr [ebx + 0xd8]
        mov     edx, dword ptr [ecx + 0x18]
        mov     eax, dword ptr [ebx + 0x348]
        and     edx, 0xffffff3f
        or      edx, eax
        mov     eax, dword ptr [ecx]
        mov     dword ptr [ecx + 0x18], edx
        call    dword ptr [eax + 0x10]
        mov     ecx, dword ptr [ebx + 0xd8]
        mov     edx, dword ptr [ecx]
        call    dword ptr [edx + 0x14]
        mov     ecx, dword ptr [ebx + 0x344]
        mov     eax, dword ptr [ebx]
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x20]

    skip_team_flag:
        mov     ecx, dword ptr [ebx + 0xe0]
        mov     edx, dword ptr [ecx]
        push    0x0
        push    0x1
        call    dword ptr [edx + 0x04]
        mov     eax, dword ptr [ebx + 0xd8]
        mov     ecx, dword ptr [eax + 0x2c]
        add     eax, 0x20
        mov     dword ptr [esp + 0x28], ecx
        mov     edx, dword ptr [eax + 0x1c]
        mov     ecx, dword ptr [esp + 0x20]
        mov     dword ptr [esp + 0x2c], edx
        mov     eax, dword ptr [eax + 0x2c]
        mov     dword ptr [esp + 0x30], eax

        cmp ecx, dword ptr [DAT_007db090]

        jnz     skip_team_color
        push    0x6
        push    ebp
        mov     byte ptr [esp + 0x1b], 0x01
        call    FUN_004c8eb0

        mov eax, dword ptr [DAT_007dab44]

        mov     ecx, dword ptr [eax]
        add     esp, 0x08
        lea     edx, [esp + 0x28]
        push    edx

        xor ecx, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [ecx + 0x1c]
        xor     ecx, 0x85739531
        call    FUN_004e2930

    skip_team_color:
        mov     eax, dword ptr [esp + 0x14]
        and     eax, 0xff
        mov     edx, eax
        shl     edx, 7
        add     edx, eax
        shl     edx, 3
        sub     edx, eax
        mov     dword ptr [edi + edx*0x8 + 0x3584], ebp
        mov     eax, dword ptr [edi + 0x50]
        mov     ecx, dword ptr [eax + 0x10]
        test    ecx, ecx
        jz      set_visible
        mov     edx, dword ptr [ebp + 0x00]
        push    0x0
        mov     ecx, ebp
        call    dword ptr [edx + 0x34]
        jmp     after_visibility

    set_visible:
        mov     eax, dword ptr [ebp + 0x00]
        push    0x1
        mov     ecx, ebp
        call    dword ptr [eax + 0x34]

    after_visibility:
        mov ecx, dword ptr [DAT_007dab44]

        mov edx, dword ptr [DAT_007dab40]

        mov     eax, dword ptr [ecx]
        mov     ebp, dword ptr [ebp + 0x170]
        xor     eax, edx
        mov     edx, dword ptr [eax + 0x44]
        xor     edx, 0x85739531
        mov     byte ptr [ebp + 0xdc], 0x01
        jz      skip_extra_init

        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [eax + 0x44]
        xor     ecx, 0x85739531
        add     ecx, 0x40
        mov     dword ptr [esp + 0x24], 0x00
        call    FUN_00416b60
        mov     ecx, dword ptr [ebp + 0x04]
        mov     ebx, eax

        mov eax, dword ptr [DAT_007f1f84]

        push    eax
        call    FUN_00415230
        test    al, al
        jz      skip_extra_init
        mov     edx, dword ptr [ebx + 0x10]
        mov     dword ptr [ebp + 0x574], edx

    skip_extra_init:
        mov eax, dword ptr [DAT_007dab44]

        mov edx, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [eax]
        xor     ecx, edx
        mov     ecx, dword ptr [ecx]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    ebp
        call    dword ptr [edx + 0x0c]          ; vfunc[3]
        mov     al, byte ptr [esp + 0x7c]
        test    al, al
        jz      skip_extra_flag

        mov eax, dword ptr [DAT_007f1f84]

        mov     ecx, dword ptr [ebp + 0x04]
        push    eax
        call    FUN_00415230
        cmp     al, 0x01
        jne     skip_extra_flag
        mov     cx, word ptr [ebp + 0x16]
        mov     al, byte ptr [ebp + 0x14]
        mov     word ptr [ebp + 0x15e], cx
        mov     byte ptr [ebp + 0x15c], al
        mov     edx, dword ptr [ebp + 0x00]
        mov     ecx, ebp
        mov     dword ptr [ebp + 0x160], 0xffffffb5
        call    dword ptr [edx + 0x148]         ; vfunc[0x52]

    skip_extra_flag:
        mov     eax, dword ptr [esp + 0x24]
        push    eax
        call    FUN_004084e0
        add     esp, 0x04
        lea     ecx, [esp + 0x54]
        call    FUN_0041e710
        xor     ebx, ebx

    check_more_data:
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x08]          ; vfunc[2]
        test    eax, eax
        jnz     process_entry
        pop     ebp

    skip_all:
        mov     ecx, dword ptr [edi + 0x50]
        cmp     dword ptr [ecx + 0x10], ebx
        mov     eax, 0x03
        jz      check_team_type
        mov     edx, dword ptr [edi + 0x4c]
        cmp     dword ptr [edx + 0x14], eax
        jne     check_team_type

        mov ecx, dword ptr [DAT_007db094]

        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        push    ebx
        mov     ecx, edi
        push    eax
        call    FUN_00538ae0
        jmp     finalize

    check_team_type:
        mov     edx, dword ptr [edi + 0x4c]
        cmp     dword ptr [edx + 0x14], eax
        jne     finalize
        mov     al, byte ptr [esp + 0x0f]
        test    al, al
        jz      finalize

        mov ecx, dword ptr [DAT_007dab44]

        mov     edx, dword ptr [ecx]

        mov ecx, dword ptr [DAT_007dab40]

        mov     eax, dword ptr [esp + 0x74]
        push    0x01
        push    ebx
        xor     edx, ecx
        mov     ecx, dword ptr [edx + 0x14]
        push    0x2a
        push    eax
        xor     ecx, 0x85739531
        call    FUN_004ce190

    finalize:
        mov     ecx, edi
        call    FUN_00531f00

        mov eax, dword ptr [DAT_007dab44]

        mov     ecx, dword ptr [eax]

        xor ecx, dword ptr [DAT_007dab40]

        mov     ecx, dword ptr [ecx + 0x20]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x01
        call    dword ptr [edx + 0x48]          ; vfunc[0x12]
        pop     edi
        pop     esi
        pop     ebx
        add     esp, 0x64
        ret     0x08
    }


}
