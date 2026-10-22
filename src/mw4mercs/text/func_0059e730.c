/*
 * FUN_0059E730 (144 B) — __thiscall method, RET 8 (2 stack params).
 *
 * Looks up or creates an item in a collection.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __cdecl FUN_00416B60(void);
extern void *__cdecl FUN_004084D0(int);
extern int __cdecl FUN_00415180(void);
extern int __cdecl FUN_00412570(void);
extern int __cdecl FUN_00416A90(void);

__declspec(naked) void FUN_0059E730(void)
{
    

extern int DAT_007b8c10;
__asm {
push    ebp
        push    edi
        mov     edi, ecx                    ; edi = this
        lea     eax, [esp + 0x0C]           ; address of param1 on stack
        lea     ebp, [edi + 0x10]           ; ebp = &this->field_10
        push    eax
        mov     ecx, ebp
        call    FUN_00416B60                ; lookup item
        test    eax, eax
        je      L_create_new
        inc     dword ptr [eax + 0x18]      ; increment ref count
        inc     dword ptr [edi + 0x2C]      ; increment this->field_2C
        pop     edi
        pop     ebp
        ret     8

    L_create_new:
        push    esi
        push    0x1C                        ; size = 0x1C
        call    FUN_004084D0                ; allocate
        mov     esi, eax
        add     esp, 4
        test    esi, esi
        je      L_alloc_failed

        mov ecx, dword ptr [DAT_007b8c10]
        push    ebx
        mov     ebx, [esp + 0x14]           ; ebx = param2
        push    ecx
        mov     ecx, esi
        call    FUN_00415180                ; init object
        mov     edx, [esp + 0x18]           ; param1
        xor     eax, eax
        push    edx
        lea     ecx, [esi + 0x10]           ; esi->field_10
        mov     [esi + 8], eax              ; esi->field_8 = 0
        mov     [esi + 0x0C], eax           ; esi->field_C = 0
        mov     dword ptr [esi], 0x76CD9C   ; set vtable
        call    FUN_00412570                ; init sub-object
        mov     [esi + 0x14], ebx           ; esi->field_14 = param2
        mov     dword ptr [esi + 0x18], 1   ; esi->field_18 = 1
        mov     dword ptr [esi], 0x783998   ; set final vtable
        pop     ebx
        jmp     L_insert_item

    L_alloc_failed:
        xor     esi, esi

    L_insert_item:
        lea     eax, [esp + 0x10]           ; address of param1
        push    eax
        push    esi
        mov     ecx, ebp
        call    FUN_00416A90                ; insert item
        mov     eax, [edi + 0x2C]
        inc     eax
        pop     esi
        mov     [edi + 0x2C], eax           ; this->field_2C++
        pop     edi
        pop     ebp
        ret     8
    }


}
