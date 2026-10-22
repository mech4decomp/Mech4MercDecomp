/*
 * FUN_005e91e0 (219 B) — __thiscall (ECX = this), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern double __stdcall FUN_00707e70(int param);
extern int __stdcall FUN_0041fd80(void *param);
extern void *__stdcall FUN_005e92f0(void *param);
extern void __stdcall FUN_00415230(void *param);
extern void __stdcall FUN_005e9870(void *param);
extern void __stdcall FUN_005e9a50(void *param);

__declspec(naked) void __stdcall FUN_005e91e0(void)
{
    

extern int DAT_007dc694;
extern int DAT_007dc696;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_0078235c;
extern int DAT_007dc700;
__asm {
push    ecx
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     esi, ecx
        push    0x0
        mov     byte ptr [esi + 0x1c4], 0x0
        call    FUN_00707e70
        fstp    qword ptr [esi + 0xec]
        lea     ecx, [esi + 0x174]
        call    FUN_0041fd80
        test    eax, eax
        jz      L_92B5
        lea     eax, [esp + 0x10]
        push    eax
        mov     ecx, esi
        call    FUN_005e92f0
        mov     bl, byte ptr [eax]
        mov     di, word ptr [eax + 0x2]
        lea     ebp, [esi + 0x194]
        mov     ecx, ebp
        call    FUN_0041fd80
        test    eax, eax
        jz      L_92B5
        cmp bl, byte ptr [DAT_007dc694]
        jnz     L_9246
        cmp di, word ptr [DAT_007dc696]
        jz      L_9259
L_9246:
        mov     edx, dword ptr [esi]
        push    ecx
        mov     eax, esp
        mov     ecx, esi
        mov     byte ptr [eax], bl
        mov     word ptr [eax + 0x2], di
        call    dword ptr [edx + 0xa0]
L_9259:
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [ecx + 0x1c]
        xor     eax, 0x85739531
        mov     edx, dword ptr [eax + 0x78]
        lea     ecx, [eax + 0x78]
        call    dword ptr [edx + 0x4]
        fld     dword ptr [eax + 0x34]
        fsub dword ptr [DAT_0078235c]
        fcomp   dword ptr [esi + 0x180]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_92A7
        mov     ecx, ebp
        call    FUN_0041fd80
        mov ecx, dword ptr [DAT_007dc700]
        push    ecx
        mov     ecx, dword ptr [eax + 0x4]
        call    FUN_00415230
        test    al, al
        jnz     L_92B5
L_92A7:
        mov     ecx, esi
        call    FUN_005e9870
        mov     ecx, esi
        call    FUN_005e9a50
L_92B5:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        pop     ecx
        ret
    }


}
