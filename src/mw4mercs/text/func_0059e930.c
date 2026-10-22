/*
 * FUN_0059e930 (115 B) — __thiscall method.
 *
 * Creates a temporary object, calls various functions, and returns.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

void FUN_00412570(void);
int FUN_005178d0(void);
int FUN_006140c0(int);
void FUN_004d1f10(void);
int FUN_004da8d0(void);
void FUN_0059eb30(int);
void FUN_004d21c0(void);

__declspec(naked) void __fastcall FUN_0059e930(void)
{
    __asm {
        sub     esp, 0x44
        mov     eax, [esp + 0x48]           ; eax = param1
        push    esi
        push    edi
        mov     edi, ecx                    ; edi = this
        push    ecx                         ; space for temp object
        mov     ecx, esp                    ; ecx = &temp
        push    eax                         ; arg = param1
        call    FUN_00412570                 ; construct temp(param1)

        call    FUN_005178d0                 ; get some object
        mov     ecx, [eax + 0x8C]           ; ecx = obj->field_8C
        call    FUN_006140c0                 ; call on field_8C

        lea     ecx, [esp + 8]              ; ecx = &temp (on stack)
        mov     esi, eax                    ; esi = result
        call    FUN_004d1f10                 ; init temp

        mov     cx, [esi + 0x10]            ; cx = esi->field_10
        mov     dx, [esi + 0x12]            ; dx = esi->field_12
        lea     eax, [esp + 0x50]           ; eax = &output_struct
        mov     [esp + 0x50], cx            ; output_struct.field_00 = cx
        push    eax                         ; arg2 = &output_struct
        lea     ecx, [esp + 0x0C]           ; ecx = &temp
        push    ecx                         ; arg1 = &temp
        mov     [esp + 0x5A], dx            ; output_struct.field_0A = dx
        call    FUN_004da8d0                 ; do something with temp and output

        mov     edx, [esp + 0x24]           ; edx = temp.field_1C (or similar)
        mov     eax, [edx + 0x30]           ; eax = edx->field_30
        add     esp, 8                      ; pop args
        push    eax                         ; arg = field_30
        mov     ecx, edi                    ; this = original this
        call    FUN_0059eb30                 ; call method

        lea     ecx, [esp + 8]              ; ecx = &temp
        call    FUN_004d21c0                 ; destruct temp

        pop     edi
        pop     esi
        add     esp, 0x44
        ret     4
    }
}
