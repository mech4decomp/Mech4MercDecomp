/*
 * FUN_0059E890 (145 B) — __thiscall method, RET 4 (1 stack param).
 *
 * Looks up a value by key in a collection.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00412570(void);
extern int __cdecl FUN_005178D0(void);
extern int __cdecl FUN_006140C0(void);
extern int __cdecl FUN_004D1F10(void);
extern int __cdecl FUN_004DA8D0(void);
extern int __cdecl FUN_00416B60(void);
extern int __cdecl FUN_004D21C0(void);

__declspec(naked) void FUN_0059E890(void)
{
    __asm {
        sub     esp, 0x44
        mov     eax, [esp + 0x48]           ; param1
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx                    ; edi = this
        push    ecx
        mov     ecx, esp                    ; temp struct on stack
        push    eax
        xor     ebx, ebx
        call    FUN_00412570                ; init temp struct
        call    FUN_005178D0                ; get global object
        mov     ecx, [eax + 0x90]           ; field_90
        call    FUN_006140C0                ; get sub-object
        lea     ecx, [esp + 0x0C]
        mov     esi, eax
        call    FUN_004D1F10                ; init stream
        mov     cx, [esi + 0x10]            ; esi->field_10 (word)
        mov     dx, [esi + 0x12]            ; esi->field_12 (word)
        lea     eax, [esp + 0x54]
        mov     [esp + 0x54], cx            ; store on stack
        push    eax
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     [esp + 0x5E], dx            ; store on stack
        call    FUN_004DA8D0                ; read data
        mov     edx, [esp + 0x28]           ; get pointer from read data
        mov     eax, [edx + 0x634]          ; field_634
        add     esp, 8
        lea     ecx, [esp + 0x54]
        add     eax, 0x96                   ; offset
        push    ecx
        lea     ecx, [edi + 0x10]           ; &this->field_10
        mov     [esp + 0x58], eax           ; store computed value
        call    FUN_00416B60                ; lookup
        test    eax, eax
        je      L_skip
        mov     ebx, [eax + 0x18]           ; get field_18 from result

    L_skip:
        lea     ecx, [esp + 0x0C]
        call    FUN_004D21C0                ; cleanup
        pop     edi
        pop     esi
        mov     eax, ebx                    ; return value
        pop     ebx
        add     esp, 0x44
        ret     4
    }
}
