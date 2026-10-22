/*
 * FUN_00556020 (216 B) — Checks state flags, processes sub-objects,
 * conditionally dispatches through FUN_00551C20 / FUN_004C3D50,
 * and calls FUN_006283B0 at the end.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 */

extern void __stdcall FUN_0041fcb0(void *);
extern void __stdcall FUN_004c3d50(int);
extern int __stdcall FUN_0041fd80(void *);
extern int __stdcall FUN_00415230(int);
extern int __stdcall FUN_00551c20(int);
extern void __stdcall FUN_0041fcd0(void *, int);
extern int __stdcall FUN_005564b0(void);
extern void __stdcall FUN_006283b0(int);

__declspec(naked) void __stdcall FUN_00556020(int param1)
{
    

extern int DAT_007dc700;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x384]
        mov     ecx, dword ptr [eax + 0x10]
        shr     ecx, 0x13
        test    cl, 0x1
        jnz     loc_ret
        mov     al, byte ptr [esi + 0x589]
        test    al, al
        jnz     loc_ret
        mov     al, byte ptr [esi + 0x5ac]
        test    al, al
        jnz     loc_ret
        mov     edx, dword ptr [esp + 0x8]
        mov     eax, dword ptr [edx + 0x10]
        test    eax, eax
        jle     loc_ret
        push    ebx
        lea     ebx, [esi + 0x6A0]
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcb0
        mov     ecx, dword ptr [esi + 0x6B0]
        push    0x0
        call    FUN_004c3d50
        lea     ecx, [esi + 0x65C]
        call    FUN_0041fd80
        mov     edi, eax
        test    edi, edi
        jz      loc_call_final
        mov eax, dword ptr [DAT_007dc700]
        mov     ecx, dword ptr [edi + 0x4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     loc_call_final
        push    edi
        mov     ecx, esi
        call    FUN_00551c20
        mov     edi, eax
        push    edi
        mov     ecx, ebx
        call    FUN_0041fcd0
        mov     ecx, esi
        call    FUN_005564b0
        test    al, al
        jz      loc_push_zero
        mov     eax, dword ptr [edi + 0xD8]
        push    eax
        jmp     loc_call_3d50
loc_push_zero:
        push    0x0
loc_call_3d50:
        mov     ecx, dword ptr [esi + 0x6B0]
        call    FUN_004c3d50
loc_call_final:
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x40]
        push    edi
        xor     ecx, 0x85739531
        call    FUN_006283b0
        pop     edi
        pop     ebx
loc_ret:
        pop     esi
        ret     0x4
    }


}
