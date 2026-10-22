/*
 * FUN_006fd276 (extent 0x6fd276-0x6fd32a) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern void __cdecl FUN_006fd2c0(void);
extern void __cdecl FUN_006fd330(void);
extern void __cdecl FUN_006fd3c0(void);
extern void __cdecl FUN_006fd400(void);
extern void __cdecl FUN_006fd450(void);
extern void __cdecl FUN_006fd500(void);

__declspec(naked) void FUN_006fd276(void)
{
    __asm {
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        mov    eax, dword ptr [esp + 8]
        mov    ecx, dword ptr [eax + 0x10]
        mov    eax, dword ptr [ecx + 8]
        and    eax, 0xf00
        cmp    eax, 0x200
        je    L_d2ad
        cmp    eax, 0x300
        jne    L_d2b8
        push    ecx
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        call    FUN_006fd2c0
        xor    eax, eax
        ret    8
L_d2ad:
        mov    edx, dword ptr [esp + 4]
        push    ecx
        push    edx
        call    FUN_006fd330
L_d2b8:
        xor    eax, eax
        ret    8
        nop    
        nop    
        nop    
        mov    ecx, dword ptr [esp + 8]
        mov    eax, dword ptr [ecx + 8]
        and    eax, 0xff000
        cmp    eax, 0x4000
        jg    L_d313
        je    L_d303
        cmp    eax, 0x1000
        je    L_d2f3
        cmp    eax, 0x2000
        jne    L_d325
        mov    eax, dword ptr [esp + 4]
        push    ecx
        push    eax
        call    FUN_006fd400
        xor    eax, eax
        ret    8
L_d2f3:
        push    ecx
        mov    ecx, dword ptr [esp + 8]
        push    ecx
        call    FUN_006fd3c0
        xor    eax, eax
        ret    8
L_d303:
        mov    edx, dword ptr [esp + 4]
        push    ecx
        push    edx
        call    FUN_006fd500
        xor    eax, eax
        ret    8
L_d313:
        cmp    eax, 0x5000
        jne    L_d325
        mov    eax, dword ptr [esp + 4]
        push    ecx
        push    eax
        call    FUN_006fd450
L_d325:
        xor    eax, eax
        ret    8
    }
}
