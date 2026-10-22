/*
 * FUN_00493d37 (extent 0x493d37-0x494050) - gen via tools/gen_bigfunc.py.
 */
#pragma warning(disable : 4035 4793)

extern float  g_00770120;
extern float  g_00770124;
extern float  g_00770128;
extern int    g_007da940;
extern char   g_007da944;
extern char   g_007da946;
extern char   g_007da948;
extern char   g_007da949;
extern char   g_007da94a;
extern char   g_007da94b;
extern char   g_007da94c;
extern char   g_007da94e;
extern char   g_007da94f;
extern char   g_007da950;
extern char   g_007da951;
extern char   g_007da952;
extern char   g_007da954;
extern char   g_007da955;
extern void __cdecl FUN_00493e30(void);

__declspec(naked) void FUN_00493d37(void)
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
        fld    dword ptr [g_007da940]
        fcomp    dword ptr [g_00770120]
        fnstsw  ax
        test    ah, 0x40
        je    L_3d59
        mov    eax, 1
        ret    
L_3d59:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007da940]
        fcomp    dword ptr [g_00770124]
        fnstsw  ax
        test    ah, 0x40
        je    L_3d79
        mov    eax, 1
        ret    
L_3d79:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007da940]
        fcomp    dword ptr [g_00770128]
        fnstsw  ax
        test    ah, 0x40
        je    L_3d99
        mov    eax, 1
        ret    
L_3d99:
        xor    eax, eax
        ret    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007da940]
        mov    dword ptr [g_007da940], 0
        fcomp    dword ptr [g_00770120]
        fnstsw  ax
        test    ah, 0x40
        jne    L_3dc7
        mov    dword ptr [g_007da940], 0x461c4000
L_3dc7:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007da940]
        mov    dword ptr [g_007da940], 0
        fcomp    dword ptr [g_00770124]
        fnstsw  ax
        test    ah, 0x40
        jne    L_3df7
        mov    dword ptr [g_007da940], 0x47742400
L_3df7:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        fld    dword ptr [g_007da940]
        mov    dword ptr [g_007da940], 0
        fcomp    dword ptr [g_00770128]
        fnstsw  ax
        test    ah, 0x40
        jne    L_3e27
        mov    dword ptr [g_007da940], 0x48742400
L_3e27:
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        xor    eax, eax
L_3e32:
        mov    cl, byte ptr [eax + g_007da944]
        test    cl, cl
        je    L_3e45
        inc    eax
        cmp    eax, 0x12
        jb    L_3e32
        mov    al, 1
        ret    
L_3e45:
        xor    al, al
        ret    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        nop    
        call    FUN_00493e30
        neg    al
        sbb    al, al
        inc    al
        mov    cl, al
        mov    ch, cl
        mov    eax, ecx
        shl    eax, 0x10
        mov    ax, cx
        mov    dword ptr [g_007da944], eax
        mov    dword ptr [g_007da948], eax
        mov    dword ptr [g_007da94c], eax
        mov    dword ptr [g_007da950], eax
        mov    word ptr [g_007da954], ax
        ret    
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
        nop    
        nop    
        nop    
        nop    
        mov    al, byte ptr [g_007da944]
        ret    
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
        mov    al, byte ptr [g_007da944]
        test    al, al
        sete    al
        mov    byte ptr [g_007da944], al
        ret    
        mov    al, byte ptr [g_007da946]
        ret    
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
        mov    al, byte ptr [g_007da946]
        test    al, al
        sete    al
        mov    byte ptr [g_007da946], al
        ret    
        mov    al, byte ptr [g_007da948]
        ret    
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
        mov    al, byte ptr [g_007da948]
        test    al, al
        sete    al
        mov    byte ptr [g_007da948], al
        ret    
        mov    al, byte ptr [g_007da949]
        ret    
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
        mov    al, byte ptr [g_007da949]
        test    al, al
        sete    al
        mov    byte ptr [g_007da949], al
        ret    
        mov    al, byte ptr [g_007da94a]
        ret    
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
        mov    al, byte ptr [g_007da94a]
        test    al, al
        sete    al
        mov    byte ptr [g_007da94a], al
        ret    
        mov    al, byte ptr [g_007da94b]
        ret    
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
        mov    al, byte ptr [g_007da94b]
        test    al, al
        sete    al
        mov    byte ptr [g_007da94b], al
        ret    
        mov    al, byte ptr [g_007da94c]
        ret    
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
        mov    al, byte ptr [g_007da94c]
        test    al, al
        sete    al
        mov    byte ptr [g_007da94c], al
        ret    
        mov    al, byte ptr [g_007da94e]
        ret    
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
        mov    al, byte ptr [g_007da94e]
        test    al, al
        sete    al
        mov    byte ptr [g_007da94e], al
        ret    
        mov    al, byte ptr [g_007da94f]
        ret    
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
        mov    al, byte ptr [g_007da94f]
        test    al, al
        sete    al
        mov    byte ptr [g_007da94f], al
        ret    
        mov    al, byte ptr [g_007da950]
        ret    
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
        mov    al, byte ptr [g_007da950]
        test    al, al
        sete    al
        mov    byte ptr [g_007da950], al
        ret    
        mov    al, byte ptr [g_007da951]
        ret    
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
        mov    al, byte ptr [g_007da951]
        test    al, al
        sete    al
        mov    byte ptr [g_007da951], al
        ret    
        mov    al, byte ptr [g_007da952]
        ret    
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
        mov    al, byte ptr [g_007da952]
        test    al, al
        sete    al
        mov    byte ptr [g_007da952], al
        ret    
        mov    al, byte ptr [g_007da954]
        ret    
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
        mov    al, byte ptr [g_007da954]
        test    al, al
        sete    al
        mov    byte ptr [g_007da954], al
        ret    
        mov    al, byte ptr [g_007da955]
        ret    
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
        mov    al, byte ptr [g_007da955]
        test    al, al
        sete    al
        mov    byte ptr [g_007da955], al
        ret    
    }
}
