/*
 * FUN_00593E60 (148 B) — __thiscall constructor, RET 4 (1 stack param).
 *
 * Initializes an object with default values.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00415180(void);
extern int __cdecl FUN_00412780(void);

__declspec(naked) void FUN_00593E60(void)
{
    

extern int DAT_007b8c10;
extern int DAT_007db0ac;
extern int DAT_007db0ae;
__asm {
        mov eax, dword ptr [DAT_007b8c10]
        push    ebx
        push    esi
        push    edi
        mov     esi, ecx                    ; esi = this
        push    eax
        call    FUN_00415180                ; init base
        mov     edx, [esp + 0x10]           ; param1
        xor     edi, edi                    ; edi = 0
        mov     [esi + 0x10], edi           ; this->field_10 = 0
        mov     [esi + 0x24], edi           ; this->field_24 = 0
        mov     [esi + 0x2C], edi           ; this->field_2C = 0
        lea     ecx, [esi + 0x10]           ; ecx = &this->field_10
        mov     [esi + 0x36], di            ; this->field_36 = 0 (word)
        or      ebx, -1                     ; ebx = -1
        mov     [esi + 0x34], bx            ; this->field_34 = -1 (word)
        mov     [esi + 0x58], edi           ; this->field_58 = 0
        mov     [esi + 0x28], edi           ; this->field_28 = 0
        mov     [esi + 0x60], edi           ; this->field_60 = 0
        mov     [esi + 0x30], edi           ; this->field_30 = 0
        mov     [esi + 0xDC], edi           ; this->field_DC = 0
        push    edx
        mov     [esi + 8], edi              ; this->field_8 = 0
        mov     [esi + 0x0C], edi           ; this->field_C = 0
        mov     [esi + 0x5C], edi           ; this->field_5C = 0
        mov     dword ptr [esi], 0x782C28   ; set vtable
        call    FUN_00412780                ; init name
        mov ax, word ptr [DAT_007db0ac]
        mov cx, word ptr [DAT_007db0ae]
        mov     [esi + 0x20], edi           ; this->field_20 = 0
        mov     [esi + 0x14], edi           ; this->field_14 = 0
        mov     [esi + 0x50], edi           ; this->field_50 = 0
        mov     [esi + 0x34], ax            ; this->field_34 = ax (word)
        pop     edi
        mov     [esi + 0x18], ebx           ; this->field_18 = -1
        mov     [esi + 0x3C], ebx           ; this->field_3C = -1
        mov     [esi + 0x38], ebx           ; this->field_38 = -1
        mov     [esi + 0x64], ebx           ; this->field_64 = -1
        mov     dword ptr [esi + 0x1C], 0x64
        mov     dword ptr [esi + 0x40], 0x1
        mov     [esi + 0x36], cx            ; this->field_36 = cx (word)
        mov     eax, esi                    ; return this
        pop     esi
        pop     ebx
        ret     4
    }


}
