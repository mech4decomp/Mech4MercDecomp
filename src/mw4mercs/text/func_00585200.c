/*
 * FUN_00585200 (239 B) — __thiscall constructor, ret 0x40 (16 params).
 * Initializes a large object with fields from stack parameters.
 *
 * CFLAGS: /O1
 */

__declspec(naked) void __stdcall FUN_00585200(void)
{
    extern void __cdecl FUN_00534630(void);
    extern void __cdecl FUN_004ea0f0(void);
    extern void __cdecl FUN_00428850(void);
    extern void __cdecl FUN_00767400(void);
    __asm {
        mov     eax, [esp + 0x0C]           ; eax = arg3 (before pushes)
        mov     edx, [esp + 4]              ; edx = arg1 (before pushes)
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx                    ; ebx = this
        mov     ecx, [esp + 0x14]           ; ecx = arg2

        ; Call base constructor: FUN_00534630(this, 2, arg1, arg2, arg3)
        push    eax                         ; arg3
        push    ecx                         ; arg2
        push    edx                         ; arg1
        push    2
        mov     ecx, ebx
        call    FUN_00534630

        ; Set fields 0x10, 0x14
        mov     ecx, [esp + 0x20]           ; ecx = arg5
        mov     eax, [esp + 0x1C]           ; eax = arg4
        mov     [ebx + 0x14], ecx           ; this->field_14 = arg5
        push    0x007DC694                  ; string constant
        lea     ecx, [ebx + 0x18]           ; &this->field_18
        mov     [ebx + 0x10], eax           ; this->field_10 = arg4
        call    FUN_004ea0f0

        ; Copy 48 bytes from arg7 to field_1C
        mov     edx, [esp + 0x28]           ; edx = arg7
        push    edx
        lea     ecx, [ebx + 0x1C]           ; &this->field_1C
        call    FUN_00428850

        ; Set fields 0x4C, 0x50, 0x54, 0x56, 0x58, 0x5C
        mov     eax, [esp + 0x30]           ; eax = arg9
        mov     ecx, [esp + 0x2C]           ; ecx = arg8
        mov     [ebx + 0x4C], eax           ; this->field_4C = arg9
        mov     eax, [esp + 0x24]           ; eax = arg6
        mov     dx, [eax]                   ; dx = arg6[0]
        mov     ax, [eax + 2]               ; ax = arg6[2]
        mov     [ebx + 0x50], ecx           ; this->field_50 = arg8
        mov     ecx, [esp + 0x38]           ; ecx = arg11
        mov     [ebx + 0x56], ax            ; this->field_56 = arg6[2]
        mov     eax, [esp + 0x3C]           ; eax = arg12
        mov     [ebx + 0x54], dx            ; this->field_54 = arg6[0]
        mov     edx, [esp + 0x34]           ; edx = arg10
        mov     [ebx + 0x58], ecx           ; this->field_58 = arg11
        push    eax                         ; arg12
        lea     ecx, [ebx + 0x60]           ; &this->field_60
        mov     [ebx + 0x5C], edx           ; this->field_5C = arg10
        call    FUN_00767400

        ; Copy struct from arg13 to field_78
        mov     ecx, [esp + 0x40]           ; ecx = arg13
        push    ecx
        lea     ecx, [ebx + 0x78]           ; &this->field_78
        call    FUN_00767400

        ; Set fields 0x90, 0x92, 0x94, 0x96 from arg16 and arg15
        mov     eax, [esp + 0x4C]           ; eax = arg16
        mov     dx, [eax]                   ; dx = arg16[0]
        mov     ax, [eax + 2]               ; ax = arg16[2]
        mov     edi, [esp + 0x44]           ; edi = arg14 (string)
        mov     [ebx + 0x92], ax            ; this->field_92 = arg16[2]
        mov     eax, [esp + 0x48]           ; eax = arg15
        mov     cx, [eax]                   ; cx = arg15[0]
        mov     [ebx + 0x90], dx            ; this->field_90 = arg16[0]
        mov     dx, [eax + 2]               ; dx = arg15[2]
        mov     [ebx + 0x94], cx            ; this->field_94 = arg15[0]
        xor     eax, eax
        mov     [ebx + 0x96], dx            ; this->field_96 = arg15[2]

        ; Copy string from arg14 to field_98
        lea     edx, [ebx + 0x98]           ; edx = &this->field_98
        or      ecx, -1
        repne scasb                         ; strlen(edi)
        not     ecx
        sub     edi, ecx                    ; edi = start of string
        mov     eax, ecx                    ; eax = length including null
        mov     esi, edi                    ; esi = source
        shr     ecx, 2                      ; ecx = length / 4
        mov     edi, edx                    ; edi = dest
        rep movsd                           ; copy dwords
        mov     ecx, eax
        and     ecx, 3                      ; remaining bytes
        rep movsb                           ; copy remaining bytes

        pop     edi
        pop     esi
        mov     eax, ebx                    ; return this
        pop     ebx
        ret     0x40
    }
}
