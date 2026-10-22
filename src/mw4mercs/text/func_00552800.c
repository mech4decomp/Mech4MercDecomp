/*
 * FUN_00552800 (156 B) — Computes a scaled float value.
 *
 * Iterates through a linked list at [this+0x384]->0x3f8,
 * finds the maximum float at [obj+0x78]->0x94 for matching
 * objects, then multiplies by FUN_005526a0 result.
 *
 * __thiscall (ECX = this), returns float in ST(0)
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_00415230(int param1, int param2);
extern char __stdcall FUN_005ef7f0(int param);
extern int __stdcall FUN_0041fd80(void);
extern float __stdcall FUN_005526a0(int param1, int param2);

__declspec(naked) void __stdcall FUN_00552800(void)
{
    

extern int DAT_007f2548;
__asm {
push    ecx
        push    ebx
        mov     ebx, ecx
        mov     eax, dword ptr [ebx + 0x384]
        push    esi
        add     eax, 0x3f8
        push    edi
        mov     edi, dword ptr [eax]
        mov     dword ptr [esp + 0x0c], 0xbf800000
label_0x55281b:
        test    edi, edi
        jz      label_0x552879
        mov     esi, dword ptr [edi]
        test    esi, esi
        mov     edi, dword ptr [edi + 0x04]
        jz      label_0x552879
        mov eax, dword ptr [DAT_007f2548]
        mov     ecx, dword ptr [esi + 0x04]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      label_0x55281b
        mov     ecx, esi
        call    FUN_005ef7f0
        test    al, al
        jz      label_0x55281b
        mov     eax, dword ptr [esi + 0xe0]
        cmp     dword ptr [eax + 0x14], 0x05
        jz      label_0x55281b
        mov     edx, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [edx + 0x04]
        fld     dword ptr [esp + 0x0c]
        mov     ecx, eax
        fcomp   dword ptr [ecx + 0x94]
        fnstsw  ax
        test    ah, 0x01
        jz      label_0x55281b
        mov     eax, dword ptr [ecx + 0x94]
        mov     dword ptr [esp + 0x0c], eax
        jmp     label_0x55281b

label_0x552879:
        lea     ecx, [ebx + 0x680]
        call    FUN_0041fd80
        mov     ecx, dword ptr [ebx + 0x384]
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_005526a0
        fmul    dword ptr [esp + 0x0c]
        pop     edi
        pop     esi
        pop     ebx
        pop     ecx
        ret
    }


}
